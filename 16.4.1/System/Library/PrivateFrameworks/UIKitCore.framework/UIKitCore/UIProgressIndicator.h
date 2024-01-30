@interface UIProgressIndicator : UIActivityIndicatorView

@property (nonatomic) int progressIndicatorStyle;

+ (struct CGSize { double x0; double x1; })size;

- (void)setAnimating:(BOOL)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setStyle:(int)a0;

@end
