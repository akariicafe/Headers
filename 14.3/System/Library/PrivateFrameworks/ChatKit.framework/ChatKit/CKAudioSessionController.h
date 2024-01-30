@interface CKAudioSessionController : NSObject

@property (getter=isActive) BOOL active;
@property (getter=isDirty) BOOL dirty;
@property unsigned long long options;
@property (readonly) BOOL shouldUseSpeaker;
@property (readonly) BOOL shouldStopPlayingWhenSilent;
@property (readonly) BOOL shouldDuckOthers;

+ (id)shareInstance;
+ (id)queue;

- (id)init;
- (void)dealloc;
- (void)activateWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)audioSessionInterruption:(id)a0;
- (void)audioSessionRouteChange:(id)a0;
- (void)audioSessionMediaServicesWereLost:(id)a0;
- (void)audioSessionMediaServicesWereReset:(id)a0;
- (void)setActive:(BOOL)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)configureAudioSessionWithOptions:(unsigned long long)a0;
- (void)deactivate;

@end
