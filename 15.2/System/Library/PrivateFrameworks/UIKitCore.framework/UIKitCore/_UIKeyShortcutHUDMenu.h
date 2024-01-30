@class NSArray, UIMenu;

@interface _UIKeyShortcutHUDMenu : _UIKeyShortcutHUDMenuElement

@property (readonly, nonatomic) UIMenu *uiMenu;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)menuWithUIMenu:(id)a0 children:(id)a1;

- (void)_acceptMenuVisit:(id /* block */)a0 shortcutVisit:(id /* block */)a1;
- (void).cxx_destruct;
- (id)menuByReplacingChildren:(id)a0;

@end
