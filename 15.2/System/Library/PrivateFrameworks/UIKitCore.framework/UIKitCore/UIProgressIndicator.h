@interface UIProgressIndicator : UIActivityIndicatorView

@property (nonatomic) int progressIndicatorStyle;

+ (struct CGSize { double x0; double x1; })size;

- (void)startAnimation;
- (void)setStyle:(int)a0;
- (void)setAnimating:(BOOL)a0;
- (void)stopAnimation;

@end
