@class UIColor;

@interface UICheckeredPatternView : UIView {
    UIColor *_patternColor;
    double _scale;
}

@property (retain, nonatomic) UIColor *checkerColor;

- (BOOL)_canDrawContent;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updatePatternColor;

@end
