@class NSString, UIImageView, UIImage, UILabel;

@interface PKTransactionReceiptLineItemTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UILabel *_amountLabel;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *tertiaryText;
@property (copy, nonatomic) NSString *amountText;
@property (nonatomic) BOOL hasTrailingLineSeparator;
@property (nonatomic) BOOL suppressImage;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
