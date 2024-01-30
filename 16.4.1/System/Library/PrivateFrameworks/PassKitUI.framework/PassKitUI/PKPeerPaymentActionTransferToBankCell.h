@class NSString, UILabel, UIImageView;

@interface PKPeerPaymentActionTransferToBankCell : UITableViewCell {
    BOOL _isRTL;
    UILabel *_feeLabel;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_checkmarkImageView;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *feeText;
@property (nonatomic) BOOL showCheckmark;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
