@class NSString, NSArray, UIView;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    UIView *_targetView;
}

@property (class, readonly, nonatomic) UIMenuController *sharedMenuController;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isMenuVisible) BOOL menuVisible;
@property (nonatomic) long long arrowDirection;
@property (copy, nonatomic) NSArray *menuItems;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } menuFrame;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hideMenu;
- (void)update;
- (id)_targetView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetRect;
- (void)calloutBar:(id)a0 willStartAnimation:(id)a1;
- (void)calloutBar:(id)a0 didFinishAnimation:(id)a1;
- (void)showMenuFromView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_menuHidden;
- (void)_windowWillRotate:(id)a0;
- (void)setMenuVisible:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_updateAnimated:(BOOL)a0 checkVisible:(BOOL)a1;
- (void)_reparentCalloutBarIfNeeded;
- (void)_removeWindowWillRotateObserver;
- (void)_showMenuAnimated:(BOOL)a0;
- (void)_hideMenuAnimated:(BOOL)a0;
- (void)hideMenuFromView:(id)a0;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2;

@end
