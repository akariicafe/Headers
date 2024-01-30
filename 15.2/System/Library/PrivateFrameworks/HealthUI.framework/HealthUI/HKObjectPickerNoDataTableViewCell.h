@class NSString, UILabel;

@interface HKObjectPickerNoDataTableViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *explanationText;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setupSubviews;

@end
