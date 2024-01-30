@class CAGradientLayer;

@interface HUFadeInButton : UIButton

@property (retain) CAGradientLayer *fadeLayer;
@property (nonatomic) BOOL shouldFadeRightToLeft;

+ (id)button;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end
