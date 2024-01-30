@interface UIProgressIndicator : UIActivityIndicatorView

@property (nonatomic) int progressIndicatorStyle;

+ (struct CGSize { double x0; double x1; })size;

- (void)setAnimating:(BOOL)a0;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setStyle:(int)a0;

@end
