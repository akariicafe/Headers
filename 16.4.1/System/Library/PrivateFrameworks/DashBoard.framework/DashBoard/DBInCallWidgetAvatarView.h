@class TUCall, NSString, UIImageView, CNAvatarViewController, CNAvatarViewControllerSettings;

@interface DBInCallWidgetAvatarView : UIButton

@property (retain, nonatomic) CNAvatarViewControllerSettings *avatarControllerSettings;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) CNAvatarViewController *avatarController;
@property (retain, nonatomic) UIImageView *appIconView;
@property (retain, nonatomic) UIImageView *focusRingView;
@property (retain, nonatomic) TUCall *currentCall;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setupImagesIfNecessary;

@end
