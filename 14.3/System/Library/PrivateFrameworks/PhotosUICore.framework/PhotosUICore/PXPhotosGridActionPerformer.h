@class PXPhotosViewModel;

@interface PXPhotosGridActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 actionType:(id)a1;
- (id)initWithActionType:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;

@end
