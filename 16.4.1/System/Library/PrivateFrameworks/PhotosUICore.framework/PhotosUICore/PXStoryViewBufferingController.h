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

- (id)initWithViewModel:(id)a0;
- (void)setIsActive:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateMainModel;
- (void)_invalidateMainModel;
- (void).cxx_destruct;
- (void)_updateWantsBufferingHUDVisible;
- (void)_invalidateBufferingController;
- (void)_invalidateBufferingControllerProperties;
- (void)_invalidateViewModelProperties;
- (void)_invalidateWantsBufferingHUDVisible;
- (void)_updateBufferingController;
- (void)_updateBufferingControllerProperties;
- (void)_updateViewModelProperties;
- (void)configureUpdater:(id)a0;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;

@end
