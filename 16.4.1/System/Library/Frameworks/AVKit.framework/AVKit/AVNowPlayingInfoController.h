@class NSObject, NSString, NSTimer, AVPlayerController, AVObservationController;
@protocol OS_dispatch_queue;

@interface AVNowPlayingInfoController : NSObject {
    id _playerControllerCurrentTimeJumpedObserver;
    BOOL _nowPlayingInfoNeedsUpdate;
    BOOL _enabled;
    void *_commandHandlerIdentifier;
    AVObservationController *_keyValueObservationController;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

@property (retain, nonatomic) AVPlayerController *playerController;
@property (weak, nonatomic) AVPlayerController *playerControllerToActivateAfterDelay;
@property (weak, nonatomic) NSTimer *startNowPlayingUpdatesTimer;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier;

+ (id)_avMediaCharacteristics;
+ (void *)_createMediaRemoteLanguageOptionGroupWithAVMediaSelectionOptions:(id)a0;
+ (void *)_createMediaRemoteLanguageOptionWithAVMediaSelectionOption:(id)a0;
+ (id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)a0;
+ (id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)a0;
+ (void)sharedNowPlayingInfoControllerWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_availableLanguageOptions;
- (id)_currentLanguageOptions;
- (id)_createNowPlayingInfoFromPlaybackInfo:(id)a0;
- (unsigned int)_handleRemoteCommand:(unsigned int)a0 options:(id)a1;
- (id)_makeCommandsAndStatesDictionaryForPlayerController:(id)a0;
- (id)_makePlaybackInfoDictionary;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfo:(id)a0 commandsAndStates:(id)a1;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)a0;
- (void)startNowPlayingUpdatesForPlayerController:(id)a0 afterDelay:(double)a1;
- (void)stopNowPlayingUpdatesForPlayerController:(id)a0;

@end
