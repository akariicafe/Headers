@interface UITextLabel : UILabel

- (long long)alignment;
- (void)setAlignment:(long long)a0;
- (float)minFontSize;
- (void)setMinFontSize:(float)a0;
- (id)color;
- (BOOL)wrapsText;
- (void)setColor:(id)a0;
- (void)setWrapsText:(BOOL)a0;
- (void)setCentersHorizontally:(BOOL)a0;
- (BOOL)centersHorizontally;
- (struct CGSize { double x0; double x1; })ellipsizedTextSize;
- (id)highlightedColor;
- (void)setHighlightedColor:(id)a0;
- (void)setTextAutoresizesToFit:(BOOL)a0;
- (BOOL)textAutoresizesToFit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
