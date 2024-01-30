@class NSArray, UIDeferredMenuElement;

@interface CNActionMenuHelper : NSObject

@property (retain, nonatomic) NSArray *currentMenuItems;
@property (retain, nonatomic) NSArray *displayedMenuItems;
@property (nonatomic) BOOL isMenuDisplayed;
@property (retain, nonatomic) UIDeferredMenuElement *deferredMenuItem;
@property (copy, nonatomic) id /* block */ deferredMenuElementCompletionBlock;

- (void).cxx_destruct;
- (void)willDismissMenu;
- (id)targetedPreviewForSourceView:(id)a0;
- (id /* block */)configurationActionProviderWithActionBlock:(id /* block */)a0;
- (void)replaceDeferredMenuItemWithMenuItems:(id)a0;
- (void)updateWithMenuItems:(id)a0 contextMenuInteraction:(id)a1;
- (void)updateVisibleMenuWithMenuItems:(id)a0 contextMenuInteraction:(id)a1;
- (void)setupDeferredMenuItem;
- (void)willDisplayMenuWithContextMenuInteraction:(id)a0;

@end
