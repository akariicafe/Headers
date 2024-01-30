@class SVMediaPlaybackController, NSMapTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface SVAudioSession : NSObject

@property (nonatomic, getter=isAudioSessionActive) BOOL audioSessionActive;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly, nonatomic) NSMapTable *players;
@property (readonly, nonatomic) SVMediaPlaybackController *playbackController;

+ (id)sharedSession;

- (void).cxx_destruct;
- (id)init;
- (void)addInterestForPlayer:(id)a0 withMode:(int)a1;
- (void)removeInterestForPlayer:(id)a0;
- (void)registerPlaybackControlForPlayer:(id)a0 withMode:(int)a1;
- (void)setupAudioSessionCategory;
- (void)activateAudioSessionCategory;
- (void)deactivateAudioSessionCategory;
- (id)desiredAudioSessionConfiguration;
- (BOOL)needsToSetupAudioSessionCategory;
- (BOOL)shouldActivateAudioSession;
- (BOOL)canDeactivateAudioSession;

@end
