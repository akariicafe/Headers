@class AVCaptureVideoPreviewLayer, UIView;

@interface CAMVideoPreviewView : UIView

@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (readonly, nonatomic) UIView *previewLayerView;
@property (nonatomic) long long previewViewAspectMode;
@property (nonatomic, getter=isSquare) BOOL square;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSubviewsAccountForSquare:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateAspectModeForSublayers;
- (void)setSquare:(BOOL)a0 animated:(BOOL)a1;

@end
