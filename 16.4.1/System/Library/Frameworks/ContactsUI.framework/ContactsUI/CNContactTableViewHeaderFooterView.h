@class UILabel, NSAttributedString;

@interface CNContactTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSAttributedString *attributedString;

- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
