@class NSString, UIImageView, UIView, UILabel;

@interface SKUIGiftDateTableViewCell : UITableViewCell {
    UIView *_bottomBorderView;
    UIImageView *_checkmarkView;
    UILabel *_dateLabel;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}

@property (nonatomic) BOOL leftToRight;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *placeholder;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)_newLabel;
- (id)_labelColor;
- (void).cxx_destruct;

@end
