@interface _UITextFieldBezelBackgroundProvider : _UITextFieldDrawingBackgroundProvider

+ (id)bezelStyleMetricsProvider;

- (void)enabledDidChangeAnimated:(BOOL)a0;
- (id)preferredMetricsProvider;
- (void)drawInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addToTextField:(id)a0;
- (long long)associatedBorderStyle;

@end
