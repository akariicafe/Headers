@class PXDisplayAssetViewModel;

@interface PXDisplayAssetImageAnalysisOverlayView : UIView

@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel;

+ (BOOL)changedImageAnalysisOverlayNeededForViewModelChange:(unsigned long long)a0;
+ (BOOL)isImageAnalysisOverlayNeededForViewModel:(id)a0;

- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
