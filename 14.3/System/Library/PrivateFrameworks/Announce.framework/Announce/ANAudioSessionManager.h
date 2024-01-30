@class AVAudioSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ANAudioSessionManager : NSObject

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_deactivateAudioSession;
- (void)_cancelTimer;
- (void)_handleTimerExpired;
- (id)initWithAudioSession:(id)a0 queue:(id)a1;
- (BOOL)activateAudioSessionWithError:(id *)a0;
- (void)deactivateAudioSession;

@end
