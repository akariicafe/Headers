@class PXStoryModel, NSString, NSDictionary, PXStoryViewModel, NSNumber;

@interface PXStoryAnalyticsController : NSObject <PXChangeObserver> {
    long long _currentViewModeSignpostID;
}

@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSDictionary *defaultPayload;
@property (readonly, nonatomic) NSDictionary *commonSpinnerRelatedPayload;
@property (nonatomic) BOOL isSessionActive;
@property (retain, nonatomic) PXStoryModel *currentModel;
@property (nonatomic) long long currentViewMode;
@property (nonatomic) BOOL didPlayStory;
@property (nonatomic) BOOL didUserChangePlaybackTime;
@property (nonatomic) long long bufferingEventsCount;
@property (retain, nonatomic) NSNumber *initialBufferingDuration;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sendMemoryEvent:(id)a0 model:(id)a1 payload:(id)a2;
+ (id)analyticsViewNameForViewMode:(long long)a0;
+ (id)memoryPayloadFromStoryModel:(id)a0;
+ (id)stringForLaunchType:(id)a0 assetCollection:(id)a1;
+ (id)stringForAudioAssetCatalog:(long long)a0;

- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)_collectAnalyticsForPlayStateChange;
- (void)_incrementPlayCountForMemory:(id)a0;
- (void)_collectAnalyticsForBuffering;
- (void)_collectAnalyticsAtPlaybackEnd;
- (void)_invalidateCurrentModel;
- (void)_updateCurrentModel;
- (void)_invalidateCurrentViewMode;
- (void)_updateCurrentViewMode;
- (void)_invalidateDidUserChangePlaybackTime;
- (void)_updateDidUserChangePlaybackTime;

@end
