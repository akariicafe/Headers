@class CAGradientLayer;

@interface HUFadeInButton : UIButton

@property (retain) CAGradientLayer *fadeLayer;
@property (nonatomic) BOOL shouldFadeRightToLeft;

+ (id)button;

- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
