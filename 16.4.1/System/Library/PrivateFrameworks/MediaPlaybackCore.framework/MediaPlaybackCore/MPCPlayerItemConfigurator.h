@class MPPlaybackEQSetting, MPCMediaFoundationTranslator, NSString, MPCModelGenericAVItem, MPCAudioAssetTypeSelector, NSObject, MPCPlayerAudioRoute, MPCPlaybackEngine, MPAVRoutingController;
@protocol MFPlaybackStackController, OS_dispatch_source, MFQueueManagement;

@interface MPCPlayerItemConfigurator : NSObject <MPAVRoutingControllerDelegate, MPCPlaybackEngineEventObserving>

@property (retain, nonatomic) MPPlaybackEQSetting *eqSetting;
@property (readonly, weak, nonatomic) MPCMediaFoundationTranslator *translator;
@property (readonly, weak, nonatomic) id<MFPlaybackStackController, MFQueueManagement> stackController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *userDefaultsDebouncer;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) MPCPlayerAudioRoute *currentAudioRoute;
@property (readonly, weak, nonatomic) MPCModelGenericAVItem *currentItem;
@property (readonly, nonatomic) MPCAudioAssetTypeSelector *audioAssetTypeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)queuedItems;
- (void)engineDidChangeVocalAttenuationState:(id)a0;
- (void)routingController:(id)a0 pickedRoutesDidChange:(id)a1;
- (void)dealloc;
- (void)engineDidChangeVocalAttenuationLevel:(id)a0;
- (void)_setupNotifications;
- (void).cxx_destruct;
- (void)_setupPlayer;
- (void)_emitAudioFormatSelection:(id)a0 item:(id)a1;
- (BOOL)configureQueuePlayerItem:(id)a0 error:(id *)a1;
- (id)_HLSMetadataForAsset:(id)a0 error:(id *)a1;
- (id)_audioFormatsDictionaryWithHLSMetadata:(id)a0;
- (id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)a0 metadataWaitTime:(double *)a1 error:(id *)a2;
- (void)_highQualityMusicStreamingOnCellularDidChange:(id)a0;
- (id)_modeObjectForPlayerItem:(id)a0;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)a0;
- (void)_preferredResolutionDidChange:(id)a0;
- (void)_resetBufferedAudio;
- (BOOL)_setupQueueItemForEnhancedAudioHLSPlayback:(id)a0 metadataWaitTime:(double *)a1 error:(id *)a2;
- (void)_setupQueueItemForLossyAudioPlayback:(id)a0;
- (void)_setupRoutingController;
- (BOOL)_shouldReloadEntireQueue;
- (void)_soundCheckEnabledChangedNotification:(id)a0;
- (void)_updatePreferredAudioFormatIfRequiredForItem:(id)a0 route:(id)a1;
- (void)_updateQueueItemsAndPlayerForFormatChangeIfRequired;
- (id)initWithPlaybackEngine:(id)a0 stackController:(id)a1 translator:(id)a2;
- (void)processAudioQualityChanges;
- (void)setupDefaultsDebouncer;
- (void)tearDownDefaultsDebouncer;
- (void)updateCurrentAudioRouteWithPickedRoutes:(id)a0;
- (void)updatePlayerConfiguration;

@end
