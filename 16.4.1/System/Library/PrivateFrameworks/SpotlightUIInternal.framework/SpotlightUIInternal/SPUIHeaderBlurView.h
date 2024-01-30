@class UIColor;

@interface SPUIHeaderBlurView : UIVisualEffectView

@property (retain) UIColor *baseTintColor;
@property (nonatomic) BOOL keyboardIsUp;
@property (nonatomic) BOOL useInPlaceFilteredBlur;

+ (double)backgroundViewBlurAlphaForProgress:(double)a0 isDarkBackground:(BOOL)a1;

- (void)setTintColor:(id)a0;
- (void)keyboardWillShow;
- (void)updateEffect;
- (id)init;
- (void).cxx_destruct;
- (void)keyboardWillHide;

@end
