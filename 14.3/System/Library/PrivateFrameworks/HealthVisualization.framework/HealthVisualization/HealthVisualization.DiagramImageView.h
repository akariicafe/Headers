@interface HealthVisualization.DiagramImageView : UIImageView {
    void /* unknown type, empty encoding */ imageRenderer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lastUsedTransformer;
    void /* unknown type, empty encoding */ lastUsedModelSpace;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;

@end
