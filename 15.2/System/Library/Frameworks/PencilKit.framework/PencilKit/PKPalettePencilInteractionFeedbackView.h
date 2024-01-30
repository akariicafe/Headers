@class MTMaterialView, PKPaletteToolPreview, UIView;

@interface PKPalettePencilInteractionFeedbackView : UIView

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) PKPaletteToolPreview *toolPreview;

- (void)layoutSubviews;
- (void)_setCornerRadius:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)showPreviewForTool:(id)a0 scalingFactor:(double)a1 animated:(BOOL)a2;

@end
