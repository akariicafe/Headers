@class NSString, UILabel, CNMeCardSharingPickerLayoutAttributes, CNMeCardSharingAvatarViewController;

@interface CNMeCardSharingHeaderViewController : UIViewController

@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) UILabel *nameLabel;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (double)desiredHeight;
- (id)initWithAvatarViewController:(id)a0 name:(id)a1 layoutAttributes:(id)a2;
- (void).cxx_destruct;

@end
