@class CAShapeLayer, UIView;

@interface CNPhotoPickerPreviewView : UIView

@property (readonly, nonatomic) UIView *previewView;
@property (retain, nonatomic) UIView *thumbnailContentView;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;

+ (id)pickerPreviewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forItem:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupPreview;
- (void)updatePreviewWithItem:(id)a0;

@end
