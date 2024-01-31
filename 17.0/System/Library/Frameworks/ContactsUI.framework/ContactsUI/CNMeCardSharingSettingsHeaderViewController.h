@class NSString, UIView, CNMeCardSharingAvatarViewController, UIButton;
@protocol CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingAvatarProvider;

@interface CNMeCardSharingSettingsHeaderViewController : UIViewController <CNMeCardSharingAvatarViewControllerDelegate>

@property (retain, nonatomic) id<CNMeCardSharingAvatarProvider> avatarProvider;
@property (nonatomic) long long mode;
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
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)minHeight;
- (double)maxHeight;
- (void).cxx_destruct;
- (double)maxAvatarHeight;
- (double)minAvatarHeight;
- (double)availableAvatarSpace;
- (void)avatarViewControllerDidUpdateImage:(id)a0 needsLayout:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarViewControllerFrame;
- (void)avatarViewControllerWasTapped:(id)a0;
- (double)desiredHeightForTraitCollection:(id)a0;
- (id)initWithAvatarProvider:(id)a0;
- (id)initWithAvatarProvider:(id)a0 mode:(long long)a1;
- (void)labelButtonTapped:(id)a0;
- (double)minBottomPadding;
- (void)updateButtonLabel;
- (void)updateLabelButtonFrame;
- (void)updateWithAvatarProvider:(id)a0;

@end
