@class UIImageView, NSLayoutConstraint, UIView;

@interface NCSymbolButton : UIControl {
    UIView *_backgroundView;
    UIImageView *_symbolImageView;
    NSLayoutConstraint *_backgroundHeightConstraint;
    NSLayoutConstraint *_backgroundWidthConstraint;
}

+ (id)button;

- (id)_init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (void)clearSymbol;
- (void)setSymbolNamed:(id)a0 color:(id)a1 pointSize:(double)a2 backgroundDiameter:(double)a3;

@end
