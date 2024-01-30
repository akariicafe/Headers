@class MTMaterialView, PKPaletteToolPreview, UIView;

@interface PKPalettePencilInteractionFeedbackView : UIView

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) PKPaletteToolPreview *toolPreview;

- (void)_setCornerRadius:(double)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)showPreviewForTool:(id)a0 scalingFactor:(double)a1 animated:(BOOL)a2;

@end
