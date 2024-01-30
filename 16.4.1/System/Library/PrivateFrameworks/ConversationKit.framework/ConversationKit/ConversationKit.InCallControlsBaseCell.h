@interface ConversationKit.InCallControlsBaseCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ isAccessiblityConstraintsEnabled;
    void /* unknown type, empty encoding */ nameLabelFirstBaselineLayoutConstraint;
    void /* unknown type, empty encoding */ nameLabelLastBaselineLayoutConstraint;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ button;

- (id)initWithCoder:(id)a0;
- (void)didTapButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
