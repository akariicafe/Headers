@interface PaperKit.ShapeListItemView : UIControl <UIPointerInteractionDelegate> {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ symbolPointSize;
}

@property (nonatomic) BOOL highlighted;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
