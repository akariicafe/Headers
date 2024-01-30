@class UIImageView, AKSignature;

@interface AKSignatureTableViewCell : UITableViewCell

@property (retain, nonatomic) AKSignature *signature;
@property (retain, nonatomic) UIImageView *signatureImageView;

- (void)_commonInit;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)_setImageFromSignature;

@end
