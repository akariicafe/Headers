@class NSString, UIView;

@interface TSWPEditMenuController : NSObject <TSKKeyboardObserver> {
    int _menuState;
}

@property (nonatomic) BOOL showMenuOnKeyboard;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) BOOL isBeginningEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAnimating;
+ (void)hideEditMenu;
+ (id)p_sharedEditMenuController;
+ (int)menuState;
+ (id)sharedEditMenuController;
+ (void)showEditMenuAtTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 canCenterHUD:(BOOL)a1 interactiveCanvasController:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardDidShowOrDock:(id)a0;
- (void)keyboardDidHideOrUndock:(id)a0;
- (void)p_setMenuVisible:(id)a0;
- (void)p_willShowMenu:(id)a0;
- (void)p_didShowMenu:(id)a0;
- (void)p_willHideMenu:(id)a0;
- (void)p_didHideMenu:(id)a0;
- (void)p_didAnimateKeyboard;
- (void)p_clearIsBeginningEditing;

@end
