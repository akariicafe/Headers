@class SBCursiveTextPath, CAShapeLayer;

@interface SBCursiveTextView : UIView {
    CAShapeLayer *_textLayer;
    SBCursiveTextPath *_textPath;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _textTransform;
}

@property (readonly, nonatomic) double duration;

- (void)configure;
- (void)setTime:(float)a0;
- (void)setFillColor:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)setAccessibilityLanguage:(id)a0;
- (void)loadText:(id)a0 pointSize:(double)a1;

@end
