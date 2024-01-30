@class UIImageView, UILabel, CAShapeLayer;

@interface PLContactPhotoOverlay : UIView

@property (readonly, nonatomic) UIImageView *_avatarPreview;
@property (retain, nonatomic) CAShapeLayer *circularLayer;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } overlayEdgeInsets;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_commonPLContactPhotoOverlayInitialization;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inscribingBounds;
- (void)beginAvatarTrackingFromImageView:(id)a0;
- (void)endAvatarTracking;

@end
