@class UIImageView, UIImage, NSLayoutConstraint, BKUIRotationArrowAnimationLayer;

@interface BKUIPearlCoachingDeviceView : UIView

@property (retain, nonatomic) UIImage *deviceImage;
@property (retain, nonatomic) UIImageView *deviceView;
@property (retain, nonatomic) BKUIRotationArrowAnimationLayer *animationLayer;
@property (nonatomic) BOOL animationRunning;
@property (nonatomic) BOOL inSheet;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (readonly, nonatomic) long long orientation;
@property (nonatomic) BOOL isDisplayZoomEnabled;

- (void)startAnimation;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setOrientation:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)stopAnimation;
- (id)initWithSheetLayout:(BOOL)a0;
- (void)resetDevice;
- (void)setDeviceHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)rotateDeviceToAngle:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_colorForStroke;

@end
