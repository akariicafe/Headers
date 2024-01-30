@class NSString, PXStoryProducerResult, PXStoryTimelineSpecManager, PXUpdater, PXStoryResourcesDataSourceManager, PXStoryStyleManager, NSProgress, NSObject, NSIndexSet, NSMutableArray;
@protocol PXStoryTimelineProducer, PXStoryTimeline, PXStoryErrorReporter, PXStoryLoadingCoordinator, OS_dispatch_queue;

@interface PXStoryTimelineManager : PXObservable <PXStoryDiagnosticHUDContentProvider, PXStoryMutableTimelineManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider> {
    BOOL _isUpdatingTimeline;
    long long _paperTrailLength;
    NSMutableArray *_targetTimelineResultsPaperTrail;
    NSMutableArray *_timelinesPaperTrail;
}

@property (readonly, nonatomic) id<PXStoryTimelineProducer> timelineProducer;
@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) PXStoryProducerResult *targetTimelineResult;
@property (nonatomic) BOOL isTargetTimelineFinal;
@property (readonly, nonatomic) BOOL requiresUpdatedTargetTimelineImmediately;
@property (retain, nonatomic) NSProgress *targetTimelineProgress;
@property (retain, nonatomic) NSIndexSet *pendingVisibleSegmentIdentifiers;
@property (readonly, nonatomic) PXStoryTimelineSpecManager *specManager;
@property (readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager;
@property (readonly, nonatomic) PXStoryStyleManager *styleManager;
@property (readonly, nonatomic) id<PXStoryLoadingCoordinator> loadingCoordinator;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long paperTrailOptions;
@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) unsigned long long timelineAttributes;
@property (readonly, nonatomic) BOOL isTimelineFinal;
@property (readonly, copy, nonatomic) NSIndexSet *visibleSegmentIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

+ (id)timelineManagerWithTimelineProducer:(id)a0 resourcesDataSourceManager:(id)a1 styleManager:(id)a2 specManager:(id)a3 configuration:(id)a4 loadingCoordinator:(id)a5 paperTrailOptions:(unsigned long long)a6;

- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)setTimeline:(id)a0;
- (void)dealloc;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (void)setVisibleSegmentIdentifiers:(id)a0;
- (void)setTimelineAttributes:(unsigned long long)a0;
- (void)_invalidateTimeline;
- (void)_updateTimeline;
- (void)_invalidateTimelineAttributes;
- (void)_updateTimelineAttributes;
- (void)setVisibleSegmentIdentifiers:(id)a0 afterUpdatePass:(BOOL)a1;
- (id)initWithTimelineProducer:(id)a0 resourcesDataSourceManager:(id)a1 styleManager:(id)a2 specManager:(id)a3 loadingCoordinator:(id)a4 errorReporter:(id)a5 options:(unsigned long long)a6 paperTrailOptions:(unsigned long long)a7;
- (void)setIsTimelineFinal:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfVisibleDisplayAssetsInResourcesDataSource:(id)a0;
- (void)_applyPendingVisibleSegmentIdentifiers;
- (void)_invalidateTargetTimeline;
- (void)_updateTargetTimeline;
- (void)_handleUpdatedTargetTimelineResult:(id)a0;
- (void)_invalidatePendingVisibleSegmentIdentifiers;
- (void)_updatePendingVisibleSegmentIdentifiers;
- (id)_diagnosticTextForSegmentIdentifier:(long long)a0 segmentTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 HUDType:(long long)a2 decisionList:(id)a3;
- (id)_diagnosticStyleTextForClipInfo:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; float x1; double x2; double x3; double x4; double x5; } x11; })a0 segmentClipCount:(int)a1 autoEditClip:(id)a2;
- (id)_diagnosticMovementTextForClipInfo:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; float x1; double x2; double x3; double x4; double x5; } x11; })a0 segmentClipCount:(int)a1 autoEditClip:(id)a2;

@end
