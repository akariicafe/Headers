@class NSArray, UIMenuController, UICalloutBar;

@interface AXQSMenuHelper : NSObject

@property (retain, nonatomic) NSArray *thirdPartyMenuItems;
@property (readonly, nonatomic) UIMenuController *menuController;
@property (readonly, nonatomic) UICalloutBar *calloutBar;
@property (nonatomic, getter=isShowingLanguageChoices) BOOL showingLanguageChoices;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)restoreMenu;
- (id)menuItemForCalloutBarButton:(id)a0;
- (void)saveThirdPartyMenuItemsIfNeeded:(id)a0;

@end
