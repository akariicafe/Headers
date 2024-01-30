@interface HealthVisualization.LevelView : UIView {
    void /* unknown type, empty encoding */ dataConfiguration;
    void /* unknown type, empty encoding */ viewConfiguration;
    void /* unknown type, empty encoding */ layoutConfiguration;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
