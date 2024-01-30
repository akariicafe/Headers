@class NSString, UILabel;

@interface SKUIGiftFooterLabelTableViewCell : UITableViewCell {
    UILabel *_footerLabel;
}

@property (copy, nonatomic) NSString *footerLabel;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
