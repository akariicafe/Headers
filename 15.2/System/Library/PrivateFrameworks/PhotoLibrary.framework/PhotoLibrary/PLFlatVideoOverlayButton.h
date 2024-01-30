@interface PLFlatVideoOverlayButton : UIButton <PLVideoOverlayButton> {
    long long _style;
    id _target;
    SEL _action;
}

- (void)_handleTap:(id)a0;
- (long long)style;
- (id)initWithStyle:(long long)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (id)_normalButtonImage;
- (id)_highlightedButtonImage;
- (id)_createOverlayImageWithBackgroundWhite:(double)a0 backgroundAlpha:(double)a1 glyphAlpha:(double)a2;

@end
