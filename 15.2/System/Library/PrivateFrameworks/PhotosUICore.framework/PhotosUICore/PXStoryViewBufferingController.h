@class PXStoryModel, PXStoryBufferingController, PXStoryViewModel, NSDictionary;

@interface PXStoryViewBufferingController : PXStoryController <PXStoryDiagnosticHUDContentProvider>

@property (retain, nonatomic) PXStoryModel *model;
@property (retain, nonatomic) PXStoryBufferingController *bufferingController;
@property (nonatomic) BOOL wantsBufferingHUDVisible;
@property (nonatomic) BOOL didShowBufferingHUDAutomatically;
@property (nonatomic) BOOL originalIsHUDVisible;
@property (nonatomic) long long originalHUDType;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) double lastNoncriticalBufferingDuration;
@property (readonly, nonatomic) double lastCriticalBufferingDuration;
@property (readonly, nonatomic) double totalBufferingTimeInterval;
@property (readonly, nonatomic) NSDictionary *totalBufferingTimeIntervalsPerReason;

- (void)setIsActive:(BOOL)a0;
- (id)initWithViewModel:(id)a0;
- (void)_invalidateMainModel;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateMainModel;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_invalidateBufferingController;
- (void)_updateBufferingController;
- (void)_invalidateBufferingControllerProperties;
- (void)_updateBufferingControllerProperties;
- (void)_invalidateWantsBufferingHUDVisible;
- (void)_updateWantsBufferingHUDVisible;
- (void)_invalidateViewModelProperties;
- (void)_updateViewModelProperties;

@end
