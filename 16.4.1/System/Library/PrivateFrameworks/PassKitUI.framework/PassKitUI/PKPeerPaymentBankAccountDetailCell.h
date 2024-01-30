@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell

@property (nonatomic) BOOL shouldDrawSeperator;
@property (nonatomic) BOOL shouldDrawFullWidthSeperator;
@property (nonatomic) double minimumTextLabelWidth;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;

@end
