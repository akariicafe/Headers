@class UIImageView, NSLayoutConstraint, UIView;

@interface NCSymbolButton : UIControl {
    UIView *_backgroundView;
    UIImageView *_symbolImageView;
    NSLayoutConstraint *_backgroundHeightConstraint;
    NSLayoutConstraint *_backgroundWidthConstraint;
}

+ (id)button;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setSymbolNamed:(id)a0 color:(id)a1 pointSize:(double)a2 backgroundDiameter:(double)a3;
- (void)clearSymbol;

@end
