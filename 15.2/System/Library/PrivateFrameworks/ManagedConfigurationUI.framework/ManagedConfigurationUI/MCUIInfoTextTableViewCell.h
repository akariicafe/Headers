@class UILabel, NSString, NSAttributedString;

@interface MCUIInfoTextTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
