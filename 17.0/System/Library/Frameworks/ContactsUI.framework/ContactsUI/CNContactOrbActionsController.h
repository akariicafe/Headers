@class NSArray, NSString, CNQuickActionsManager, CNContactActionsController;
@protocol CNContactOrbActionsControllerDelegate;

@interface CNContactOrbActionsController : NSObject <CNContactActionsControllerDelegate, CNQuickActionsManagerDelegate>

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSArray *menuItems;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNQuickActionsManager *actionsManager;
@property (retain, nonatomic) NSArray *actionCategories;
@property (nonatomic) BOOL bypassActionValidation;
@property (weak, nonatomic) id<CNContactOrbActionsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (void)setupActionsForContacts:(id)a0;
- (void)reloadMenuItems;
- (void)setupActionsManagerForContacts:(id)a0;
- (id)actionsManager:(id)a0 presentingViewControllerForAction:(id)a1;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (void)contactActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (id)currentAvailableMenuItems;
- (id)initWithContacts:(id)a0;
- (id)initWithContacts:(id)a0 actionCategories:(id)a1;
- (id)initWithContacts:(id)a0 actionCategories:(id)a1 bypassActionValidation:(BOOL)a2;
- (id)menuItemsForContactsWithActions:(id)a0;
- (void)setupActionsControllerForContact:(id)a0;
- (BOOL)shouldUseActionsManagerForContacts:(id)a0;

@end
