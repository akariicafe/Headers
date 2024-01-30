@class UIImageView, UILabel, AKSignature;

@interface AKSignatureTableViewCell : UITableViewCell

@property (retain, nonatomic) AKSignature *signature;
@property (retain, nonatomic) UIImageView *signatureImageView;
@property (retain, nonatomic) UILabel *signatureLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)accessibilityLabel;
- (void)_setLabelFromSignature;
- (void)_setImageFromSignature;

@end
