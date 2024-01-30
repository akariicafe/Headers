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

- (void)_updateUserEventSource;
- (void)_logDidStartViewingZoomLevel:(long long)a0;
- (void)_logDidStartViewingAllPhotosZoomStateName:(id)a0;
- (id)initWithViewModel:(id)a0 layout:(id)a1;
- (void)logLibraryItemsCount:(long long)a0;
- (void)_updateDominantObjectReference;
- (void)_logDidEndViewingAllPhotosZoomStateName:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateCurrentlyViewedZoomLevel;
- (void)_updateFirstTimeExperienceReadinessLogging;
- (void)_invalidateDominantObjectReference;
- (void)_updateCurrentAllPhotosZoomState;
- (void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;
- (void)dealloc;
- (void)_invalidateUserEventSource;
- (void)_invalidateFirstTimeExperienceReadinessLogging;
- (id)userEventTracker;
- (void)_invalidateCurrentAllPhotosZoomState;
- (void)logAnalysisProgress:(float)a0;
- (void)_logDidEndViewingZoomLevel:(long long)a0;
- (id)initWithViewName:(id)a0;
- (void).cxx_destruct;
- (void)_updateCurrentlyViewedZoomLevel;

@end
