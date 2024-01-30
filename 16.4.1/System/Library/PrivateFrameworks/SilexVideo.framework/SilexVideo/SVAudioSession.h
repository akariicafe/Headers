@class NSMapTable, AVAudioSession, SVMediaPlaybackController, NSObject;
@protocol OS_dispatch_semaphore;

@interface SVAudioSession : NSObject

@property (nonatomic, getter=isAudioSessionActive) BOOL audioSessionActive;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly, nonatomic) NSMapTable *players;
@property (readonly, nonatomic) SVMediaPlaybackController *playbackController;
@property (readonly, nonatomic) AVAudioSession *audioSession;

+ (id)sharedSession;
+ (id)sharedSessionForMode:(int)a0;
+ (id)sharedSilentSession;

- (void).cxx_destruct;
- (id)initWithAudioSession:(id)a0;
- (void)addInterestForPlayer:(id)a0 withMode:(int)a1;
- (void)removeInterestForPlayer:(id)a0;
- (void)activateAudioSessionCategory;
- (BOOL)canDeactivateAudioSession;
- (void)deactivateAudioSessionCategory;
- (id)desiredAudioSessionConfiguration;
- (BOOL)needsToSetupAudioSessionCategory;
- (void)registerPlaybackControlForPlayer:(id)a0 withMode:(int)a1;
- (void)setupAudioSessionCategory;
- (BOOL)shouldActivateAudioSession;

@end
