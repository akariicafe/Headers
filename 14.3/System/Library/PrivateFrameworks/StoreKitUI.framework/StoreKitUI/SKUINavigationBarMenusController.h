@class UIControl, NSString, NSArray, SKUIMenuPopoverController, SKUINavigationBarMenusView;

@interface SKUINavigationBarMenusController : SKUINavigationBarSectionController <SKUIMenuPopoverDelegate> {
    UIControl *_focusedMenuButton;
    SKUINavigationBarMenusView *_menusView;
    NSArray *_menuViewElements;
    SKUIMenuPopoverController *_popoverController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)view;
- (void)dealloc;
- (void)willAppearInNavigationBar;
- (void)_menuButtonAction:(id)a0;
- (void)menuPopoverDidCancel:(id)a0;
- (void)menuPopover:(id)a0 didSelectMenuItemAtIndex:(long long)a1;
- (void)menuPopover:(id)a0 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (id)initWithMenuViewElements:(id)a0;
- (void)reloadSectionViews;
- (void)_destroyPopover;
- (id)_menuViewElementForView:(id)a0;

@end
