@class AVPlayerInternal, NSArray, NSString, AVAudioSession, NSError, NSNumber, AVPlayerPlaybackCoordinator;
@protocol AVLoggingIdentifier;

@interface AVPlayer : NSObject <AVAudioSessionParticipant> {
    AVPlayerInternal *_player;
}

@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;
@property (readonly, nonatomic) long long _externalProtectionStatus;
@property (readonly, nonatomic, getter=_isPIPModePossible) BOOL PIPModePossible;
@property (readonly, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;
@property float minRateForAudioPlayback;
@property float maxRateForAudioPlayback;
@property BOOL allowsPixelBufferPoolSharing;
@property BOOL disallowsAMRAudio;
@property BOOL appliesMediaSelectionCriteriaAutomatically;
@property (copy) NSString *audioOutputDeviceUniqueID;
@property BOOL allowsOutOfBandTextTrackRendering;
@property (copy) NSString *multichannelAudioStrategy;
@property (copy, nonatomic) NSString *captionRenderingStrategy;
@property (copy, nonatomic) NSString *captionPipelineStrategy;
@property (nonatomic, getter=_preservesAudioSessionSampleRate, setter=_setPreservesAudioSessionSampleRate:) BOOL preservesAudioSessionSampleRate;
@property (retain) AVAudioSession *audioSession;
@property (nonatomic) unsigned long long preferredVideoDecoderGPURegistryID;
@property (retain, nonatomic) id<AVLoggingIdentifier> loggingIdentifier;
@property (nonatomic, getter=_disallowsAutoPauseOnRouteRemovalIfNoAudio, setter=_setDisallowsAutoPauseOnRouteRemovalIfNoAudio:) BOOL disallowsAutoPauseOnRouteRemovalIfNoAudio;
@property (retain, nonatomic, getter=_STSLabel, setter=_setSTSLabel:) NSString *STSLabel;
@property (nonatomic) BOOL prefersPlayingSilentlyWhenConflictingWithOtherPlayback;
@property (readonly, nonatomic) BOOL isSilencedDueToConflictWithOtherPlayback;
@property (nonatomic, getter=_silencesOtherPlaybackDuringPIP, setter=_setSilencesOtherPlaybackDuringPIP:) BOOL silencesOtherPlaybackDuringPIP;
@property (readonly, nonatomic) NSNumber *mxSessionID;
@property (copy, nonatomic) NSString *backgroundPIPAuthorizationToken;
@property (readonly, nonatomic) NSArray *videoTargets;
@property (readonly) AVPlayerPlaybackCoordinator *playbackCoordinator;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;

+ (void)initialize;
+ (void)registerForScreenConnectionChanges;
+ (BOOL)worksAroundConcurrentKVOCrash;
+ (id)makePlayerLoggingIdentifier;
+ (int)_createFigPlayerWithType:(long long)a0 options:(const struct __CFDictionary { } *)a1 player:(struct OpaqueFigPlayer **)a2;
+ (long long)availableHDRModes;
+ (void)fireAvailableHDRModesDidChangeNotification;
+ (void)fireEligibleForHDRPlaybackDidChangeNotification;
+ (id)playerWithPlayerItem:(id)a0;
+ (id)playerWithFigPlayer:(struct OpaqueFigPlayer { } *)a0;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;
+ (BOOL)automaticallyNotifiesObserversOfUserVolume;
+ (BOOL)automaticallyNotifiesObserversOfVibrationPattern;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (void)checkForAvailableHDRModesChanges;
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)eligibleForHDRPlayback;
+ (BOOL)isIAPDExtendedModeActive;
+ (BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (id)playerWithURL:(id)a0;

- (struct OpaqueCMClock { } *)masterClock;
- (void)setVibrationPattern:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)vibrationPattern;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (void)setMuted:(BOOL)a0;
- (void)setRate:(float)a0;
- (float)_rate;
- (BOOL)isMuted;
- (void)setVolume:(float)a0;
- (void)setSourceClock:(struct OpaqueCMClock { } *)a0;
- (float)volume;
- (id)initWithPlayerItem:(id)a0;
- (id)outputContext;
- (float)rate;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithURL:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)_addLayer:(id)a0;
- (id)_rateDidChangeNotificationPayloadForAVFRateChangeReason:(id)a0 reasonIsExtendedDiagnostic:(BOOL)a1 rateChangeIdentifier:(id)a2 rateChangeOriginator:(id)a3;
- (long long)externalPlaybackType;
- (void)_removeLayer:(id)a0;
- (BOOL)_isMuted;
- (id)externalPlaybackVideoGravity;
- (id)initWithDispatchQueue:(id)a0;
- (void)_updateClosedCaptionLayerBounds:(id)a0 videoRelativeToViewport:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 captionsAvoidanceMargins:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a2;
- (id)currentItemPublisher;
- (BOOL)isExternalPlaybackActive;
- (void)_removeLayer:(id)a0 videoLayer:(id)a1 closedCaptionLayer:(id)a2 subtitleLayer:(id)a3 interstitialLayer:(id)a4;
- (void)_updateConnectionToSecondScreen;
- (void)_evaluateDisplaySizeOfAllAttachedLayers;
- (id)closedCaptionsDisplayPublisher;
- (struct CGSize { double x0; double x1; })_cachedPresentationSizeOfCurrentItem;
- (void)setExternalPlaybackVideoGravity:(id)a0;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)a0;
- (void)_pixelBufferAttributesDidChangeForLayer:(id)a0;
- (id)_performanceDictionary;
- (void)setPlayerRole:(id)a0 synchronously:(BOOL)a1;
- (void)setShouldReduceResourceUsage:(BOOL)a0;
- (void)_ensureVideoLayersAreAttached;
- (id)_items;
- (void)_changeStatusToFailedWithError:(id)a0;
- (void)removeTimeObserver:(id)a0;
- (id)playerRole;
- (id)_nameForLogging;
- (void)_enumerateItemsUsingBlock:(id /* block */)a0;
- (void)_didEnterBackground:(id)a0;
- (void)_addFPListeners;
- (float)_playerVolume;
- (long long)audiovisualBackgroundPlaybackPolicy;
- (BOOL)shouldReduceResourceUsage;
- (long long)resourceConservationLevelWhilePaused;
- (BOOL)usesDedicatedNotificationQueueForMediaServices;
- (struct CGSize { double x0; double x1; })dimensionsOfReservedVideoMemory;
- (BOOL)autoSwitchStreamVariants;
- (BOOL)preparesItemsForPlaybackAsynchronously;
- (struct OpaqueCMClock { } *)sourceClock;
- (BOOL)disallowsHardwareAcceleratedVideoDecoder;
- (BOOL)isDisplayingClosedCaptions;
- (id)interstitialPlayer;
- (long long)timeControlStatus;
- (BOOL)automaticallyWaitsToMinimizeStalling;
- (id)reasonForWaitingToPlay;
- (id)_videoLayers;
- (id)expectedAssetTypes;
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)a0 afterItem:(id)a1;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer { } *)a0;
- (BOOL)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(id /* block */)a0 modificationBlock:(id /* block */)a1 error:(id *)a2;
- (void)_setPendingFigPlayerProperty:(id)a0 forKey:(id)a1;
- (BOOL)_hostApplicationHasForegroundExemption;
- (void)_didFinishSuspension:(id)a0;
- (void)_layerForegroundStateChanged:(id)a0;
- (void)_stopObservingPropertiesOfCurrentItem:(id)a0;
- (struct OpaqueFigPlayer { } *)_copyFigPlayer;
- (void)_removeAllLayers;
- (void)_removeFPInterstitialCoordinatorListeners;
- (id)_stateDispatchQueue;
- (id)currentItem;
- (void)_updateDecoderPixelBufferAttributes:(id)a0 onFigPlayer:(struct OpaqueFigPlayer { } *)a1;
- (void)_startObservingPropertiesOfCurrentItem:(id)a0;
- (void)_setCurrentItem:(id)a0;
- (id)_synchronizeWithNewCurrentItem;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (long long)_inferredTimeControlStatusAndWaitingReason:(id *)a0 forRate:(float)a1;
- (long long)_itemOkayToPlayWhileTransitioningToBackground:(id)a0;
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(id /* block */)a0;
- (void)_updateProxyTimebaseFromNewCurrentItem;
- (BOOL)_hostApplicationInForeground;
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)a0;
- (BOOL)_isAirPlayVideoActive;
- (void)_removeFPListeners;
- (void)_createAndConfigureFigPlayerWithType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)_pendingFigPlayerPropertyForKey:(id)a0;
- (BOOL)_hasForegroundLayers;
- (BOOL)_clientRequestedPlaybackCoordinator;
- (id)_pendingFigPlayerProperties;
- (id)_playbackCoordinatorWithoutTriggeringFullSetup;
- (BOOL)_isVideoPlaybackAllowedWhileInBackground;
- (BOOL)_hasAssociatedAVPlayerLayerInPIPMode;
- (void)_attachVideoLayersToFigPlayer;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_setNeroVideoGravityOnFigPlayer;
- (id)_interstitialPlayerIfCreated;
- (void)seekToDate:(id)a0;
- (void)linkInterstitialFigPlayersOnQueue;
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(id /* block */)a0;
- (struct OpaqueFigPlayerInterstitialCoordinator { } *)_retainInterstitialCoordinatorIfCreated;
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)a0;
- (id)_items_invokeOnIvarAccessQueue;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentUnfoldedTime;
- (long long)_timeControlStatusAndWaitingReason:(id *)a0 forPlaybackState:(int)a1;
- (BOOL)_rateDidChangeNotificationIncludesExtendedDiagnosticPayload;
- (BOOL)_usesLegacyAutomaticWaitingBehavior;
- (id)_rateDidChangeNotificationPayloadForFigRateChangeReason:(int)a0 rateChangeIdentifier:(id)a1 rateChangeOriginator:(id)a2;
- (void)_updatePlayerRate:(float)a0 rateChangeReason:(int)a1 rateChangeIdentifier:(id)a2 figPlayerSetRateHandler:(id /* block */)a3;
- (id)_avPlayerLayers;
- (void)setRate:(float)a0 withVolumeRampDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 playImmediately:(BOOL)a2 rateChangeReason:(int)a3 affectsCoordinatedPlayback:(BOOL)a4;
- (long long)_updateWaitingReasonAccordingToInterstitialEventCoordinator:(id *)a0 forTimeControlStatus:(long long)a1;
- (int)_createPrerollID;
- (void)seekToDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (struct __CFString { } *)figPlayerActionForActionAtItemEnd:(long long)a0;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id /* block */)a0;
- (void)_setActionAtItemEnd:(long long)a0 allowingAdvance:(BOOL)a1;
- (id /* block */)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (BOOL)isClosedCaptionDisplayEnabled;
- (id)_closedCaptionLayers;
- (struct __CFDictionary { } *)_createDictionaryWithDimensionsOfReservedVideoMemory:(struct CGSize { double x0; double x1; })a0;
- (void)_detachVideoLayersFromFigPlayer:(struct OpaqueFigPlayer { } *)a0;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachClosedCaptionLayersFromFigPlayer:(struct OpaqueFigPlayer { } *)a0;
- (struct CGSize { double x0; double x1; })_maximumAVPlayerLayerDisplaySize;
- (id)_subtitleLayers;
- (long long)_clientPriority;
- (BOOL)_isIAPDExtendedModeActive;
- (void)_updatePixelBufferAttributesForLayer:(id)a0;
- (id)_externalPlaybackVideoGravity;
- (id)_fpNotificationNames;
- (id)_copyPerformanceDataForCurrentItem;
- (BOOL)_dynamicallyChoosesInitialVariant;
- (void)addVideoTarget:(struct OpaqueFigVideoTarget { } *)a0;
- (BOOL)_limitsBandwidthForCellularAccess;
- (void)setAudiovisualBackgroundPlaybackPolicy:(long long)a0;
- (void)setPlayerRole:(id)a0;
- (void)_advanceToNextItem;
- (void)_noteNewPresentationSizeForPlayerItem:(id)a0;
- (BOOL)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0;
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)a0;
- (void)_itemIsReadyToPlay:(id)a0;
- (void)_insertItem:(id)a0 afterItem:(id)a1;
- (void)_setAncillaryPerformanceInformationForDisplay:(id)a0;
- (id)_ancillaryPerformanceInformationForDisplay;
- (void)replaceCurrentItemWithPlayerItem:(id)a0;
- (void)setRate:(float)a0 withVolumeRampDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)playImmediatelyAtRate:(float)a0;
- (BOOL)_carplayIsActive;
- (void)pauseWithoutAffectingCoordinatedPlayback;
- (void)_setRateDidChangeNotificationIncludesExtendedDiagnosticPayload:(BOOL)a0;
- (long long)_timeControlStatusAndWaitingReason:(id *)a0;
- (void)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)prerollAtRate:(float)a0 completionHandler:(id /* block */)a1;
- (void)cancelPendingPrerolls;
- (void)prerollOperationDidComplete:(BOOL)a0 notificationPayload:(struct __CFDictionary { } *)a1;
- (void)setClosedCaptionDisplayEnabled:(BOOL)a0;
- (BOOL)_isDisplayingClosedCaptions;
- (void)setResourceConservationLevelWhilePaused:(long long)a0;
- (BOOL)_externalPlaybackActive;
- (void)setUsesDedicatedNotificationQueueForMediaServices:(BOOL)a0;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { double x0; double x1; })a0;
- (BOOL)allowsAirPlayVideo;
- (void)setAllowsAirPlayVideo:(BOOL)a0;
- (BOOL)_airPlayVideoActive;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)a0;
- (id)_pixelBufferAttributeMediator;
- (BOOL)_shouldLogPerformanceData;
- (void)_addCaptionLayer:(id)a0 subtitleLayer:(id)a1;
- (void)_removeCaptionLayer:(id)a0 subtitleLayer:(id)a1;
- (void)_addFPInterstitialCoordinatorListeners;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { } *)a0;
- (BOOL)_getDisplayVideoRange:(id *)a0 displaySize:(struct CGSize { double x0; double x1; } *)a1 refreshRate:(id *)a2;
- (void)_logPerformanceDataForPreviousItem;
- (void)_logPerformanceDataForCurrentItem;
- (void)_setSuppressesAudioRendering:(BOOL)a0;
- (void)_setDynamicallyChoosesInitialVariant:(BOOL)a0;
- (void)_setLimitsBandwidthForCellularAccess:(BOOL)a0;
- (BOOL)_suppressesAudioRendering;
- (void)setOutputContext:(id)a0;
- (BOOL)_pausesAudioVisualPlaybackInBackground;
- (long long)_extractFPExternalProtectionStatus:(id)a0;
- (id)_playbackDisplaysForFigPlayer;
- (long long)_externalProtectionStatusCopiedFromFig;
- (void)removeAudioPlaybackRateLimits;
- (void)_setHostApplicationInForeground:(BOOL)a0;
- (BOOL)_CALayerDestinationIsTVOut;
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (void)_detachVideoLayersForSuspension;
- (BOOL)_canContinuePlaybackInBackgrounBasedOnAudiovisualBackgroundPlaybackPolicy:(long long)a0;
- (id)_acquireBackgroundAssertion;
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;
- (BOOL)_shouldDetachVideoLayersFromFigPlayer;
- (void)_forceHostApplicationInForeground:(BOOL)a0;
- (BOOL)_rateUpdateDuringTransitionDecided;
- (BOOL)_isConnectedToPhysicalSecondScreen;
- (void)_setCALayerDestinationIsTVOut:(BOOL)a0;
- (BOOL)_disallowsVideoLayerDisplayCompositing;
- (void)_setClientPriority:(long long)a0;
- (void)_setPreventsSleepDuringVideoPlayback:(BOOL)a0;
- (BOOL)_preventsSleepDuringVideoPlayback;
- (void)_setDisallowsVideoLayerDisplayCompositing:(BOOL)a0;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)a0;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)a0;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)a0;
- (void)setAutoSwitchStreamVariants:(BOOL)a0;
- (void)removeVideoTarget:(struct OpaqueFigVideoTarget { } *)a0;
- (BOOL)_ensuresActiveAudioSessionWhenStartingPlayback;
- (void)_setEnsuresActiveAudioSessionWhenStartingPlayback:(BOOL)a0;
- (void)_updateVideoTargetOnFigPlayer;
- (void)_setIsInterstitialPlayer:(BOOL)a0;
- (void)_setInterstitialPlayerGuts:(id)a0;
- (void)syncAudioSessionToInterstitialPlayer:(id)a0;
- (BOOL)_isInterstitialPlayer;
- (struct OpaqueFigPlayerInterstitialCoordinator { } *)retainInterstitialEventCoordinator;
- (void)_setInterstitialPlayer:(id)a0;
- (void)_noteRemoteInterstitialEvents:(id)a0 forItem:(id)a1;
- (void)_noteCurrentRemoteInterstitialEvent:(id)a0;
- (id)_weakReference;
- (void)_willEnterForeground:(id)a0;
- (id)init;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_setEQPreset:(int)a0;
- (long long)actionAtItemEnd;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (void)_setUserVolume:(float)a0;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (id)playerAVAudioSession;
- (id)addBoundaryTimeObserverForTimes:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)setActionAtItemEnd:(long long)a0;
- (void)prepareItem:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (void)setMediaSelectionCriteria:(id)a0 forMediaCharacteristic:(id)a1;
- (float)_userVolume;
- (void)pause;
- (void)_setPreferredLanguageList:(id)a0;
- (void)_setStoppingFadeOutDuration:(float)a0;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)a0;
- (void)setExpectedAssetTypes:(id)a0;
- (BOOL)_resumePlayback:(double)a0 error:(id *)a1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)a0;
- (void)_setPausesAudioVisualPlaybackInBackground:(BOOL)a0;
- (void)setPreparesItemsForPlaybackAsynchronously:(BOOL)a0;
- (void)_setUsesLegacyAutomaticWaitingBehavior:(BOOL)a0;
- (void)_removeItem:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)_setClientName:(id)a0;
- (void)play;
- (id)_clientName;
- (void)dealloc;
- (void)_removeAllItems;
- (BOOL)isAirPlayVideoActive;
- (void)setAutomaticallyWaitsToMinimizeStalling:(BOOL)a0;
- (void)setAllowsExternalPlayback:(BOOL)a0;
- (BOOL)allowsExternalPlayback;
- (id)dispatchQueue;

@end
