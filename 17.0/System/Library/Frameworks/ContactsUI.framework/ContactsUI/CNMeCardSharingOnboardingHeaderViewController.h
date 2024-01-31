@class NSString, CNMeCardSharingOnboardingAvatarCarouselViewController, UILabel, CNMeCardSharingPickerLayoutAttributes;

@interface CNMeCardSharingOnboardingHeaderViewController : UIViewController

@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselController;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) UILabel *headerLabel;

+ (double)heightForHeaderWithContainerSize:(struct CGSize { double x0; double x1; })a0 withTitle:(id)a1 layoutAttributes:(id)a2 hasAvatar:(BOOL)a3;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithAvatarCarouselViewController:(id)a0 headerTitle:(id)a1 layoutAttributes:(id)a2;

@end
