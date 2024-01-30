@class UIColor;

@interface UICheckeredPatternView : UIView {
    UIColor *_patternColor;
    double _scale;
}

@property (retain, nonatomic) UIColor *checkerColor;

- (BOOL)_canDrawContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePatternColor;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
