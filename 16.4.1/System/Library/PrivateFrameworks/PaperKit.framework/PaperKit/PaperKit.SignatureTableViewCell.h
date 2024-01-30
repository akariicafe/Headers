@interface PaperKit.SignatureTableViewCell : UITableViewCell {
    void /* unknown type, empty encoding */ contentLeadingInset;
    void /* unknown type, empty encoding */ contentEditLeadingInset;
    void /* unknown type, empty encoding */ contentTrailingInset;
    void /* unknown type, empty encoding */ contentVerticalInset;
    void /* unknown type, empty encoding */ signatureView;
    void /* unknown type, empty encoding */ signature;
    void /* unknown type, empty encoding */ signatureViewLeadingConstraint;
    void /* unknown type, empty encoding */ signatureViewTrailingConstraint;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
