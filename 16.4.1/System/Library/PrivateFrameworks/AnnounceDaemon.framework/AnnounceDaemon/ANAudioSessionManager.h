@class NSUUID, ANTimer, AVAudioSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface ANAudioSessionManager : NSObject

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSUUID *endpointUUID;
@property (copy, nonatomic) id /* block */ waitForCallEndCompletion;
@property (retain, nonatomic) ANTimer *callEndTimer;

- (void)_handleTimerExpired;
- (void)dealloc;
- (void)_cancelTimer;
- (void).cxx_destruct;
- (void)_deactivateAudioSession;
- (void)_deregisterForAudioSessionNotifications;
- (void)_registerForAudioSessionNotifications;
- (void)activateAudioSessionWithCompletion:(id /* block */)a0;
- (BOOL)activateAudioSessionWithError:(id *)a0;
- (BOOL)callIsActive;
- (void)deactivateAudioSessionAfterDelay:(double)a0;
- (void)handleCallActiveDidChangeNotification:(id)a0;
- (id)initWithAudioSession:(id)a0 queue:(id)a1 endpointID:(id)a2;
- (void)startCallEndTimer;

@end
