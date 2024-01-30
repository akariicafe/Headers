@class UIColor;

@interface SPUIHeaderBlurView : UIVisualEffectView

@property (retain) UIColor *baseTintColor;
@property (nonatomic) BOOL useInPlaceFilteredBlur;

+ (double)backgroundViewBlurAlphaForProgress:(double)a0 isDarkBackground:(BOOL)a1;

- (void)updateEffect;
- (void).cxx_destruct;
- (id)init;
- (void)setTintColor:(id)a0;

@end
