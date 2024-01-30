@class AVTView, CAShapeLayer;

@interface CNPhotoPickerAnimojiPosePreviewView : CNPhotoPickerPreviewView

@property (readonly, nonatomic) AVTView *avtView;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;

- (void)layoutSubviews;
- (void)setupPreview;
- (void)updatePreviewWithItem:(id)a0;
- (void).cxx_destruct;
- (void)updatePoseWithConfiguration:(id)a0;

@end
