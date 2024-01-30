@class NSString, UIVisualEffectView, UILabel;

@interface PNPWizardScratchpadToast : UIView {
    UIVisualEffectView *_background;
    UILabel *_label;
}

@property (copy, nonatomic) NSString *text;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
