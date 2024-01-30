@class UILabel, NSString;

@interface WDClinicalConceptHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_setupSubviews;

@end
