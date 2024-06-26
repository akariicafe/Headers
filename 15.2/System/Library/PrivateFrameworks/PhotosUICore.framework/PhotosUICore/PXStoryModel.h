@class PXVideoSessionManager, PXStoryStyleManager, PXStoryAnimationController, PXAssetReference, NSMutableArray, PXStoryTimelineManager, NSString, NSMutableSet, PXStoryLayoutSpecManager, PXStoryResourcesDataSourceManager, NSObject, NSSet, PXUpdater, PXStoryViewModeTransition, PXStoryLoadingStatusReporter, PXExtendedTraitCollection, PXStoryRecipeManager, PXStoryConfiguration, NSMapTable, NSIndexSet, AVAudioSession;
@protocol PXStoryErrorReporter, PXStoryTimeline, PXStoryTimelineSpec, PXStoryStyle, OS_dispatch_queue, PXStoryColorGradingRepository, PXStorySongResource, NSCopying, PXDisplayAssetCollection, PXStoryLayoutSpec, PXDisplayAssetFetchResult;

@interface PXStoryModel : PXObservable <PXStoryMutableModel, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider> {
    NSMutableSet *_changesOrigins;
    NSMutableArray *_persistenceRequests;
    NSMutableSet *_musicDuckingTokens;
}

@property (readonly, nonatomic) PXStoryLayoutSpecManager *layoutSpecManager;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSMapTable *HUDContentProvidersByType;
@property (copy, nonatomic) id /* block */ overallDurationChangeCompletionHandler;
@property (nonatomic) long long bufferingEvents;
@property (nonatomic) long long numberOfPresentedAlerts;
@property (nonatomic) long long colorGradeKind;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } outroDuration;
@property (nonatomic) double outroFractionCompleted;
@property (nonatomic) BOOL didPrerequestPersistencePermission;
@property (readonly, nonatomic) PXStoryConfiguration *configuration;
@property (readonly, nonatomic) PXStoryTimelineManager *timelineManager;
@property (readonly, nonatomic) double playbackMaxFractionCompleted;
@property (readonly, nonatomic) id<NSCopying> uniqueIdentifier;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } nominalPlaybackTime;
@property (readonly, nonatomic) unsigned long long lastPlaybackTimeChangeSource;
@property (readonly, nonatomic) double playbackFractionCompleted;
@property (readonly, nonatomic) BOOL isAtPlaybackEnd;
@property (readonly, nonatomic) long long desiredPlayState;
@property (readonly, nonatomic) BOOL isActuallyPlaying;
@property (readonly, nonatomic) long long viewMode;
@property (readonly, nonatomic) long long thumbnailStyle;
@property (readonly, nonatomic) BOOL shouldAutoplayThumbnail;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } thumbnailAutoplayTimeRange;
@property (readonly, nonatomic) BOOL shouldAspectFitCurrentSegment;
@property (readonly, nonatomic) PXStoryViewModeTransition *viewModeTransition;
@property (readonly, nonatomic) BOOL prefersExportLayoutMatchesPlayback;
@property (readonly, nonatomic) double titleOpacity;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } currentGridScrollPosition;
@property (readonly, nonatomic) struct { long long firstSegmentIdentifier; double secondSegmentMixFactor; long long secondSegmentIdentifier; } currentScrollPosition;
@property (readonly, nonatomic) BOOL isScrolling;
@property (readonly, nonatomic) BOOL allowsScrolling;
@property (readonly, nonatomic) BOOL isTouching;
@property (readonly, nonatomic) BOOL isPresentingAssetPicker;
@property (readonly, nonatomic) BOOL isPresentingMusicEditor;
@property (readonly, nonatomic) BOOL isPresentingColorGradeEditor;
@property (readonly, nonatomic) BOOL isPerformingViewControllerTransition;
@property (readonly, nonatomic) BOOL isPresentingAnyAlert;
@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) unsigned long long timelineAttributes;
@property (readonly, nonatomic) id<PXStoryTimelineSpec> timelineSpec;
@property (readonly, nonatomic) id<PXStoryTimeline> gridTimeline;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeIntoCurrentSegment;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeLeftInCurrentSegment;
@property (readonly, nonatomic) long long currentSegmentIdentifier;
@property (readonly, nonatomic) long long previousSegmentIdentifier;
@property (readonly, copy, nonatomic) NSIndexSet *visibleSegmentIdentifiers;
@property (readonly, nonatomic) long long lastHitClipIdentifier;
@property (readonly, copy, nonatomic) PXAssetReference *lastHitAssetReference;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> visibleDisplayAssets;
@property (readonly, nonatomic) BOOL isFirstSegmentVisible;
@property (readonly, nonatomic) long long readinessStatus;
@property (readonly, nonatomic) long long contentReadinessStatus;
@property (readonly, nonatomic) long long musicReadinessStatus;
@property (readonly, nonatomic) id<PXStoryStyle> currentStyle;
@property (readonly, nonatomic) double styleSwitcherVisibilityFraction;
@property (readonly, nonatomic) PXStoryStyleManager *styleManager;
@property (readonly, nonatomic) id<PXStoryColorGradingRepository> colorGradingRepository;
@property (readonly, nonatomic) NSString *titleCategory;
@property (readonly, nonatomic) id<PXStorySongResource> editorPreviewSong;
@property (readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager;
@property (readonly, nonatomic) PXStoryRecipeManager *recipeManager;
@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) id<PXStorySongResource> currentSongResource;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> currentAssetCollection;
@property (readonly, nonatomic) BOOL currentAssetCollectionIsFavorite;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } elapsedTime;
@property (readonly, nonatomic) PXStoryAnimationController *animationController;
@property (readonly, nonatomic) PXVideoSessionManager *videoSessionManager;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) id<PXStoryLayoutSpec> layoutSpec;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL isExporting;
@property (readonly, nonatomic) BOOL inLiveResize;
@property (readonly, nonatomic) PXStoryLoadingStatusReporter *loadingStatusReporter;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, nonatomic) BOOL isHUDVisible;
@property (readonly, nonatomic) long long diagnosticHUDType;
@property (readonly, nonatomic) NSSet *changesOrigins;
@property (readonly, nonatomic) long long persistencePermission;
@property (readonly, nonatomic) BOOL wantsMusicDucked;
@property (readonly, nonatomic) double volume;
@property (readonly, nonatomic) long long infoPanelState;
@property (readonly, nonatomic) double infoPanelVisibilityFraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

- (void)setElapsedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setVolume:(double)a0;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)setDesiredPlayState:(long long)a0;
- (void)setAllowsScrolling:(BOOL)a0;
- (void)setConfiguration:(id)a0;
- (void)_setNeedsUpdate;
- (void)setAudioSession:(id)a0;
- (void)setIsHUDVisible:(BOOL)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setCurrentStyle:(id)a0;
- (id)init;
- (void)setIsScrolling:(BOOL)a0;
- (void)setViewMode:(long long)a0;
- (void)setTitleOpacity:(double)a0;
- (void)setTimeline:(id)a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)diagnosticDescriptionForAllHUDTypes;
- (id)initWithConfiguration:(id)a0 extendedTraitCollection:(id)a1;
- (void)setPrefersExportLayoutMatchesPlayback:(BOOL)a0;
- (id)initWithConfiguration:(id)a0 extendedTraitCollection:(id)a1 loadingCoordinator:(id)a2 paperTrailOptions:(unsigned long long)a3;
- (void)setTimelineSpec:(id)a0;
- (void)setIsTouching:(BOOL)a0;
- (void)reconfigureWithAssetCollection:(id)a0;
- (void)scrollToPosition:(struct { long long x0; double x1; long long x2; })a0;
- (void)didStartPresentingAlert;
- (void)didEndPresentingAlert;
- (BOOL)setCurrentSegmentIdentifier:(long long)a0 timeIntoSegment:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 timeLeftInSegment:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 changeSource:(unsigned long long)a3;
- (BOOL)skipToSegmentWithOffset:(long long)a0;
- (BOOL)skipToBeginningOfSegmentWithIdentifier:(long long)a0;
- (BOOL)rewindToBeginningOfCurrentSegment;
- (void)flickedPastEnd;
- (void)restartPlaybackFromBeginning;
- (void)setDiagnosticHUDContentProvider:(id)a0 forType:(long long)a1;
- (void)makeCurrentAssetKeyPhoto;
- (void)makeAssetKeyPhoto:(id)a0;
- (void)removeAssetFromCuration:(id)a0;
- (void)changeOverallDuration:(long long)a0 completionHandler:(id /* block */)a1;
- (id)beginMusicDucking;
- (void)endMusicDuckingWithToken:(id)a0;
- (void)setThumbnailStyle:(long long)a0;
- (void)setShouldAutoplayThumbnail:(BOOL)a0;
- (void)setThumbnailAutoplayTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)setShouldAspectFitCurrentSegment:(BOOL)a0;
- (void)setViewModeTransition:(id)a0;
- (void)setStyleSwitcherVisibilityFraction:(double)a0;
- (void)setIsActuallyPlaying:(BOOL)a0;
- (void)setCurrentGridScrollPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setIsPresentingAssetPicker:(BOOL)a0;
- (void)setIsPresentingMusicEditor:(BOOL)a0;
- (void)setIsPresentingColorGradeEditor:(BOOL)a0;
- (void)setIsPerformingViewControllerTransition:(BOOL)a0;
- (void)setVisibleSegmentIdentifiers:(id)a0;
- (void)setLastHitClipIdentifier:(long long)a0;
- (void)setLastHitAssetReference:(id)a0;
- (void)setReadinessStatus:(long long)a0;
- (void)setContentReadinessStatus:(long long)a0;
- (void)setMusicReadinessStatus:(long long)a0;
- (void)setCurrentAssetCollectionIsFavorite:(BOOL)a0;
- (void)setEditorPreviewSong:(id)a0;
- (void)setCurrentSongResource:(id)a0;
- (void)setInLiveResize:(BOOL)a0;
- (void)setDiagnosticHUDType:(long long)a0;
- (void)setInfoPanelState:(long long)a0;
- (void)setInfoPanelVisibilityFraction:(double)a0;
- (id)initWithTimelineManager:(id)a0 layoutSpecManager:(id)a1 configuration:(id)a2;
- (void)performChanges:(id /* block */)a0 origin:(id)a1;
- (void)didEndChangeHandling;
- (void)_callCompletionHandlersPendingTimelineChange;
- (void)setTimelineAttributes:(unsigned long long)a0;
- (void)setLayoutSpec:(id)a0;
- (void)setPlaybackFractionCompleted:(double)a0;
- (void)setPlaybackMaxFractionCompleted:(double)a0;
- (void)setIsAtPlaybackEnd:(BOOL)a0;
- (void)setNominalPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setCurrentScrollPosition:(struct { long long x0; double x1; long long x2; })a0;
- (void)setCurrentAssetCollection:(id)a0;
- (void)setPersistencePermission:(long long)a0;
- (void)_clearLastHitAssetClip;
- (id)diagnosticHUDContentProviderForType:(long long)a0;
- (void)setIsPresentingAnyAlert:(BOOL)a0;
- (void)setLastPlaybackTimeChangeSource:(unsigned long long)a0;
- (BOOL)getMainVisibleClipIdentifier:(out long long *)a0 assetReferece:(id *)a1;
- (id)assetReferenceForClipIdentifier:(long long)a0;
- (void)requestPersistencePermission:(id /* block */)a0;
- (void)requestPersistencePermissionWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)reportPersistenceFailureWithError:(id)a0;
- (void)prerequestPersistencePermission:(id /* block */)a0;
- (void)performWithPrerequestedPersistencePermission:(id /* block */)a0;
- (void)_completePersistenceRequestsWithSuccess:(BOOL)a0 error:(id)a1;
- (void)setWantsMusicDucked:(BOOL)a0;
- (BOOL)checkIfShouldPreventAdvancingAndReturnReason:(out id *)a0;
- (void)setPreviousSegmentIdentifier:(long long)a0;
- (void)_invalidateTimeline;
- (void)_updateTimeline;
- (void)_invalidateTimelineAttributes;
- (void)_updateTimelineAttributes;
- (void)_invalidateTimelineSpec;
- (void)_updateTimelineSpec;
- (void)_invalidateNominalPlaybackTime;
- (void)_updateNominalPlaybackTime;
- (void)_invalidatePlaybackFractionCompleted;
- (void)_updatePlaybackFractionCompleted;
- (void)_invalidateCurrentAssetCollection;
- (void)_updateCurrentAssetCollection;
- (void)_invalidateCurrentStyleAndFocus;
- (void)_updateCurrentStyle;
- (void)_invalidateLayoutSpec;
- (void)_updateLayoutSpec;
- (void)_invalidateShouldAspectFitCurrentSegment;
- (void)_updateShouldAspectFitCurrentSegment;
- (void)_invalidatePersistencePermission;
- (void)_updatePersistencePermission;
- (void)_invalidateWantsMusicDucked;
- (void)_updateWantsMusicDucked;
- (void)_invalidateOutroDuration;
- (void)_updateOutroDuration;
- (void)_invalidateOutroFractionCompleted;
- (void)_updateOutroFractionCompleted;
- (id)_appleMusicCapabilitiesDebugInformation;
- (id)_musicCurationDebugInformation;
- (id)diagnosticTextForHUDType:(long long)a0;
- (id)_currentAssetCollectionDescriptionForHUDType:(long long)a0;
- (id)currentTimeDescription;
- (id)currentStyleDescription;
- (id)currentGradeDescription;
- (id)currentSongDescription;
- (id)currentSongTagsDescription;
- (id)currentSongPaceDescription;

@end
