@class NSString, PXCuratedLibraryLayout, NSMutableDictionary, PXSectionedObjectReference, PXCuratedLibraryViewModel, NSTimer;

@interface PXCuratedLibraryEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXCuratedLibraryEventTracker> {
    BOOL _loggedFirstTimeExperience;
    NSTimer *_slowScrollRegimeTimer;
}

@property (nonatomic) unsigned long long userEventSource;
@property (nonatomic) long long currentlyViewedZoomLevel;
@property (nonatomic) long long currentZoomLevelSignpost;
@property (retain, nonatomic) NSString *currentAllPhotosZoomStateName;
@property (nonatomic) long long currentAllPhotosZoomStateSignpost;
@property (retain, nonatomic) PXSectionedObjectReference *dominantObjectReference;
@property (nonatomic) long long libraryItemsCount;
@property (nonatomic) float analysisProgress;
@property (nonatomic) float firstTimeExperienceAnalysisProgress;
@property (nonatomic) long long firstTimeExperienceLibraryItemsCount;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSMutableDictionary *payload;

- (void)_logDidStartViewingAllPhotosZoomStateName:(id)a0;
- (void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;
- (void)_logDidEndViewingAllPhotosZoomStateName:(id)a0;
- (void)_invalidateFirstTimeExperienceReadinessLogging;
- (void)_invalidateDominantObjectReference;
- (void)_logDidEndViewingZoomLevel:(long long)a0;
- (void)_updateDominantObjectReference;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)userEventTracker;
- (void)_invalidateCurrentlyViewedZoomLevel;
- (void)_updateCurrentlyViewedZoomLevel;
- (void)dealloc;
- (void)logLibraryItemsCount:(long long)a0;
- (void)logAnalysisProgress:(float)a0;
- (id)initWithViewModel:(id)a0 layout:(id)a1;
- (id)initWithViewName:(id)a0;
- (void)_updateFirstTimeExperienceReadinessLogging;
- (void)_updateCurrentAllPhotosZoomState;
- (void)_logDidStartViewingZoomLevel:(long long)a0;
- (void)_invalidateUserEventSource;
- (void)_invalidateCurrentAllPhotosZoomState;
- (void)_updateUserEventSource;

@end
