@class PXStoryModel, NSProgress, PXStoryViewModel, NSError, NSObject;
@protocol OS_dispatch_queue, PXStoryErrorReporter, PXStoryTimeline;

@interface PXStoryValidationController : PXStoryController <PXStoryDiagnosticHUDContentProvider>

@property (retain, nonatomic) PXStoryModel *model;
@property (retain, nonatomic) id<PXStoryTimeline> timelineToValidate;
@property (retain, nonatomic) NSProgress *timelineValidationProgress;
@property (retain, nonatomic) NSError *timelineValidationError;
@property (nonatomic) long long timelineValidationCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) BOOL isActive;

+ (id)_validateTimeline:(id)a0 progress:(id)a1;

- (id)initWithViewModel:(id)a0;
- (void)setIsActive:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleTimelineValidationError:(id)a0 progress:(id)a1;
- (void)_invalidateModel;
- (void)_invalidateTimelineToValidate;
- (void)_invalidateTimelineValidation;
- (void)_updateModel;
- (void)_updateTimelineToValidate;
- (void)_updateTimelineValidation;
- (void)configureUpdater:(id)a0;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;

@end
