@class UILabel, NSString;

@interface WDClinicalConceptHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)initWithReuseIdentifier:(id)a0;

@end
