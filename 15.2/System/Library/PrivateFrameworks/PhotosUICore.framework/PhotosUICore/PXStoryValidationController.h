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

- (void)setIsActive:(BOOL)a0;
- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (void)_invalidateModel;
- (void)_updateModel;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)_invalidateTimelineToValidate;
- (void)_updateTimelineToValidate;
- (void)_invalidateTimelineValidation;
- (void)_updateTimelineValidation;
- (void)_handleTimelineValidationError:(id)a0 progress:(id)a1;
- (void)handleModelChange:(unsigned long long)a0;

@end
