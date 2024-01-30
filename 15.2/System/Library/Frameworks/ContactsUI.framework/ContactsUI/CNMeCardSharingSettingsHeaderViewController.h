@class NSString, UIView, CNMeCardSharingAvatarViewController, UIButton;
@protocol CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingAvatarProvider;

@interface CNMeCardSharingSettingsHeaderViewController : UIViewController <CNMeCardSharingAvatarViewControllerDelegate>

@property (retain, nonatomic) id<CNMeCardSharingAvatarProvider> avatarProvider;
@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIButton *labelButton;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) id<CNMeCardSharingSettingsHeaderViewControllerDelegate> delegate;
@property (readonly, nonatomic) double separatorHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)avatarEdgeLengthForTraitCollection:(id)a0;

- (void)reload;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithAvatarProvider:(id)a0;
- (void)avatarViewControllerDidUpdateImage:(id)a0;
- (void)avatarViewControllerWasTapped:(id)a0;
- (void)labelButtonTapped:(id)a0;
- (double)desiredHeightForTraitCollection:(id)a0;
- (void)updateWithAvatarProvider:(id)a0;
- (void)updateForChangedImage;
- (void).cxx_destruct;

@end
