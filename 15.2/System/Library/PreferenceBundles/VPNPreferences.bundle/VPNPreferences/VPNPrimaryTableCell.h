@class UILabel, NSMutableString, NSString;

@interface VPNPrimaryTableCell : PSTableCell

@property (retain, nonatomic) UILabel *specialStatusLabel;
@property (retain) NSMutableString *detailText;
@property (retain) NSString *subtitle;
@property (retain) NSString *status;
@property (retain) NSString *alert;
@property BOOL disabled;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)updateDetail;

@end
