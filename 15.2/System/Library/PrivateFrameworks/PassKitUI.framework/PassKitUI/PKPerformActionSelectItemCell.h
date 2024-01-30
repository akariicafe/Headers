@class NSString, UILabel;

@interface PKPerformActionSelectItemCell : UITableViewCell {
    UILabel *_descriptionLabel;
    UILabel *_amountLabel;
}

@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *amountText;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_addSubviews;

@end
