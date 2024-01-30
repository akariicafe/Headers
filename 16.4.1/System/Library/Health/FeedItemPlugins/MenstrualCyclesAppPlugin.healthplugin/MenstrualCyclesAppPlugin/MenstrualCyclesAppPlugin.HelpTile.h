@interface MenstrualCyclesAppPlugin.HelpTile : UIView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ bodyLabel;
    void /* unknown type, empty encoding */ actionButton;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ dismissButton;
    void /* unknown type, empty encoding */ accessibilityConstraints;
    void /* unknown type, empty encoding */ nonAccessibilityConstraints;
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ viewModel;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dismissTapped;
- (void)actionTapped;

@end
