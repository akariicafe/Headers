@class AVAudioSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface ANAudioSessionManager : NSObject

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (void)_cancelTimer;
- (void)_handleTimerExpired;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_deactivateAudioSession;
- (id)initWithAudioSession:(id)a0 queue:(id)a1 endpointID:(id)a2;
- (BOOL)activateAudioSessionWithError:(id *)a0;
- (void)deactivateAudioSessionAfterDelay:(double)a0;

@end
