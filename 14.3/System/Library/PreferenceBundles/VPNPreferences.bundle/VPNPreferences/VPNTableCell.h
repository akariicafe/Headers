@class NSString, NSMutableString;

@interface VPNTableCell : PSTableCell

@property (retain) NSMutableString *detailText;
@property (retain) NSString *subtitle;
@property (retain) NSString *alert;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)setChecked:(BOOL)a0;
- (void)layoutSubviews;
- (void)updateDetail;

@end
