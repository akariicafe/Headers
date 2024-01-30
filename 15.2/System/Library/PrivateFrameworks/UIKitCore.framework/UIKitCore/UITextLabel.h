@interface UITextLabel : UILabel

- (void)setMinFontSize:(float)a0;
- (BOOL)wrapsText;
- (float)minFontSize;
- (id)color;
- (void)setAlignment:(long long)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setWrapsText:(BOOL)a0;
- (long long)alignment;
- (id)highlightedColor;
- (BOOL)centersHorizontally;
- (void)setCentersHorizontally:(BOOL)a0;
- (struct CGSize { double x0; double x1; })ellipsizedTextSize;
- (void)setHighlightedColor:(id)a0;
- (void)setTextAutoresizesToFit:(BOOL)a0;
- (BOOL)textAutoresizesToFit;
- (void)setColor:(id)a0;

@end
