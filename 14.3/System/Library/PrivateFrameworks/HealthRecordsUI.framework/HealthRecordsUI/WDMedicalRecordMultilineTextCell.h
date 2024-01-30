@class UILabel, NSAttributedString, UIView;

@interface WDMedicalRecordMultilineTextCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) NSAttributedString *text;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setupSubviews;

@end
