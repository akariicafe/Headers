@class CAGradientLayer;

@interface HUFadeInButton : UIButton

@property (retain) CAGradientLayer *fadeLayer;
@property (nonatomic) BOOL shouldFadeRightToLeft;

+ (id)button;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
