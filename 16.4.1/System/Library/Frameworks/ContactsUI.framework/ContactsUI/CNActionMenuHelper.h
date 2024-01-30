@class NSArray, UIDeferredMenuElement, NSString;

@interface CNActionMenuHelper : NSObject

@property (retain, nonatomic) NSArray *currentMenuItems;
@property (retain, nonatomic) NSArray *displayedMenuItems;
@property (nonatomic) BOOL isMenuDisplayed;
@property (retain, nonatomic) UIDeferredMenuElement *deferredMenuItem;
@property (copy, nonatomic) id /* block */ deferredMenuElementCompletionBlock;
@property (retain, nonatomic) NSString *menuTitle;

- (void)willDisplayMenuWithContextMenuInteraction:(id)a0;
- (id)menuForProviders;
- (void)updateWithMenuItems:(id)a0 contextMenuInteraction:(id)a1;
- (void)updateVisibleMenuWithMenuItems:(id)a0 contextMenuInteraction:(id)a1;
- (void)willDismissMenu;
- (void)replaceDeferredMenuItemWithMenuItems:(id)a0;
- (id /* block */)menuProviderWithActionBlock:(id /* block */)a0;
- (id)targetedPreviewForSourceView:(id)a0;
- (void)setupDeferredMenuItem;
- (id /* block */)configurationActionProviderWithActionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
