@class UIImageView, UILabel;

@interface PKPaymentCredentialTableViewCell : PKTableViewCell

@property (readonly, nonatomic) UIImageView *snapshotImageView;
@property (readonly, nonatomic) UILabel *credentialDetailLabel;
@property (nonatomic) BOOL showingPlaceholder;
@property (nonatomic) BOOL snapshotImageHasBorder;

+ (struct CGSize { double x0; double x1; })defaultImageViewSize;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)detailTextLabelColor;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;

@end
