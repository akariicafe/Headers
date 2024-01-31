@class NSArray, UIDeferredMenuElement, NSString;

@interface CNActionMenuHelper : NSObject

@property (retain, nonatomic) NSArray *currentMenuItems;
@property (retain, nonatomic) NSArray *displayedMenuItems;
@property (nonatomic) BOOL isMenuDisplayed;
@property (retain, nonatomic) UIDeferredMenuElement *deferredMenuItem;
@property (copy, nonatomic) id /* block */ deferredMenuElementCompletionBlock;
@property (retain, nonatomic) NSString *menuTitle;

- (id /* block */)menuProviderWithActionBlock:(id /* block */)a0;
- (id)targetedPreviewForSourceView:(id)a0;
- (void)willDismissMenu;
- (void)willDisplayMenuWithContextMenuInteraction:(id)a0;
- (void)setupDeferredMenuItem;
- (void)updateWithMenuItems:(id)a0 contextMenuInteraction:(id)a1;
- (void)updateVisibleMenuWithMenuItems:(id)a0 contextMenuInteraction:(id)a1;
- (id)menuForProviders;
- (void).cxx_destruct;
- (void)replaceDeferredMenuItemWithMenuItems:(id)a0;
- (id /* block */)configurationActionProviderWithActionBlock:(id /* block */)a0;

@end
