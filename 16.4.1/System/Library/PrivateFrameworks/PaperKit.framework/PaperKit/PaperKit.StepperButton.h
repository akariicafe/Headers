@interface PaperKit.StepperButton : UIControl {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ imageConfiguration;
    void /* unknown type, empty encoding */ image;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
