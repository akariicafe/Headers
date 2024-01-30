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
- (void)prepareForReuse;
- (void)layoutSubviews;
- (double)separatorHeight;
- (void).cxx_destruct;
- (void)setGivenNameField:(id)a0 familyNameField:(id)a1;
- (id)textFieldForIndex:(long long)a0;

@end
