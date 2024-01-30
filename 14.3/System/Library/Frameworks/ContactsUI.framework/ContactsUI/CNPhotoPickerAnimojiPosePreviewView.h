@class AVTView, CAShapeLayer;

@interface CNPhotoPickerAnimojiPosePreviewView : CNPhotoPickerPreviewView

@property (readonly, nonatomic) AVTView *avtView;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updatePoseWithConfiguration:(id)a0;
- (void)setupPreview;
- (void)updatePreviewWithItem:(id)a0;

@end
