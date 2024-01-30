@class UIImageView;

@interface HUSoftwareUpdateAnimatedIcon : UIView {
    UIImageView *_innerGearView;
    UIImageView *_outerGearShadowView;
    UIImageView *_outerGearView;
    BOOL _animating;
}

@property (readonly, nonatomic) UIImageView *innerGearView;
@property (readonly, nonatomic) UIImageView *outerGearShadowView;
@property (readonly, nonatomic) UIImageView *outerGearView;

- (void)createConstraints;
- (void).cxx_destruct;
- (void)setAnimating:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
