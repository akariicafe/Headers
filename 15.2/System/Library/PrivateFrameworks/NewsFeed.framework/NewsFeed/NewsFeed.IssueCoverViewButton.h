@interface NewsFeed.IssueCoverViewButton : UIButton {
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ coverView;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isHighlighted;

@end
