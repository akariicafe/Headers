@class NSString, UIImageView, UITextField, UIView, UIImage;

@interface CNSharingProfileOnboardingNameCell : UITableViewCell

@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (retain, nonatomic) UIView *fakeSeparator;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (nonatomic) long long nameOrder;
@property (retain, nonatomic) UIImage *avatarImage;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;

+ (id)cellIdentifier;
+ (double)desiredMinimumCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (double)separatorHeight;
- (id)textFieldForIndex:(long long)a0;
- (void)setGivenNameField:(id)a0 familyNameField:(id)a1;

@end
