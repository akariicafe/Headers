@interface SeymourUI.PlaybackControl : UIControl {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ transitionView;
    void /* unknown type, empty encoding */ imageViewWidthConstraint;
    void /* unknown type, empty encoding */ width;
    void /* unknown type, empty encoding */ widthConstraint;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
