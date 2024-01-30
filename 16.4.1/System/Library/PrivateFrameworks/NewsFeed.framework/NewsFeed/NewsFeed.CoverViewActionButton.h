@interface NewsFeed.CoverViewActionButton : UIButton {
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ onMenuPresentation;
    void /* unknown type, empty encoding */ touchInsets;
    void /* unknown type, empty encoding */ tintColorForNormalState;
}

@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
