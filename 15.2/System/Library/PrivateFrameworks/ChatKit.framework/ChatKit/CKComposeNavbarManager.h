@class CKComposeNavbarManagerContentView, CKComposeNavbarCanvasViewController, CKNavbarCanvasViewController, UIView, UIButton;

@interface CKComposeNavbarManager : NSObject

@property (retain, nonatomic) CKComposeNavbarManagerContentView *contentView;
@property (retain, nonatomic) CKComposeNavbarCanvasViewController *defaultNavbarCanvasViewController;
@property (retain, nonatomic) CKNavbarCanvasViewController *avatarNavbarCanvasViewController;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) UIView *customStatusBackgroundView;

- (void)updateContentsForConversation:(id)a0;
- (void).cxx_destruct;
- (void)_setupDefaultNavbarCanvasViewControllerForBusinessChat:(BOOL)a0;
- (void)_setupAvatarNavBarViewControllerWithConversation:(id)a0 shouldShowBackButtonView:(BOOL)a1;
- (id)initForBusinessChat:(BOOL)a0;
- (void)setCanvasViewControllerDelegate:(id)a0;
- (void)commitTransitionAnimationWithConversation:(id)a0 shouldShowBackButtonView:(BOOL)a1;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)dealloc;

@end
