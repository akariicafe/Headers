@interface RPFlatVideoOverlayButton : UIButton <RPVideoOverlayButton> {
    long long _style;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (long long)style;
- (void)_handleTap:(id)a0;
- (id)_normalButtonImage;
- (id)_highlightedButtonImage;
- (id)_createOverlayImageWithBackgroundWhite:(double)a0 backgroundAlpha:(double)a1 glyphAlpha:(double)a2;

@end
