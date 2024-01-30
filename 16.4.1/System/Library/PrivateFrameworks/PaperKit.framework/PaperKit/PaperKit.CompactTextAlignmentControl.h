@interface PaperKit.CompactTextAlignmentControl : UIControl <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ viewControllerProvider;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ symbolConfiguration;
    void /* unknown type, empty encoding */ selectedTextAlignment;
}

@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)didTapSelf;
- (void)textAlignmentValueDidChange:(id)a0;

@end
