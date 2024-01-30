@interface VideosUI.OfferCardCollectionViewCell : VUIFocusableCollectionViewCell <VUIRentalExpirationLabelDelegate> {
    void /* unknown type, empty encoding */ viewLayout;
    void /* unknown type, empty encoding */ offerView;
    void /* unknown type, empty encoding */ belowCardTextLabel;
}

- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
