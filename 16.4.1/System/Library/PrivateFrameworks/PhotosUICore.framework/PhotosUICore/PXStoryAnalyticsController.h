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

+ (id)analyticsViewNameForViewMode:(long long)a0;
+ (id)memoryPayloadFromStoryModel:(id)a0;
+ (void)sendMemoryEvent:(id)a0 model:(id)a1 payload:(id)a2;
+ (id)stringForAudioAssetCatalog:(long long)a0;
+ (id)stringForLaunchType:(id)a0 assetCollection:(id)a1;

- (id)initWithViewModel:(id)a0;
- (void)viewDidAppear;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_collectAnalyticsAtPlaybackEnd;
- (void)_collectAnalyticsForBuffering;
- (void)_collectAnalyticsForPlayStateChange;
- (void)_incrementPlayCountForMemory:(id)a0;
- (void)_invalidateCurrentModel;
- (void)_invalidateCurrentViewMode;
- (void)_invalidateDidUserChangePlaybackTime;
- (void)_updateCurrentModel;
- (void)_updateCurrentViewMode;
- (void)_updateDidUserChangePlaybackTime;
- (void)viewDidDisappear;

@end
