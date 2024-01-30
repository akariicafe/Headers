@class CKComposeNavbarManagerContentView, CKComposeNavbarCanvasViewController, CKNavbarCanvasViewController, UIView, UIButton;

@interface CKComposeNavbarManager : NSObject

@property (retain, nonatomic) CKComposeNavbarManagerContentView *contentView;
@property (retain, nonatomic) CKComposeNavbarCanvasViewController *defaultNavbarCanvasViewController;
@property (retain, nonatomic) CKNavbarCanvasViewController *avatarNavbarCanvasViewController;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) UIView *customStatusBackgroundView;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)_setupDefaultNavbarCanvasViewController;
- (void)_setupAvatarNavBarViewControllerWithConversation:(id)a0 shouldShowBackButtonView:(BOOL)a1;
- (void)setCanvasViewControllerDelegate:(id)a0;
- (void)commitTransitionAnimationWithConversation:(id)a0 shouldShowBackButtonView:(BOOL)a1;

@end
