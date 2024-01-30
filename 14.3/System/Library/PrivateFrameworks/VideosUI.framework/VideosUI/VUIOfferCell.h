@class IKViewElement, VUIOfferView, VUILabel, NSString;

@interface VUIOfferCell : VUIFocusableCollectionViewCell <VUIRentalExpirationLabelDelegate>

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIOfferView *offerView;
@property (retain, nonatomic) VUILabel *belowCardTextLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configureViewWithElement:(id)a0 existingCell:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;

@end
