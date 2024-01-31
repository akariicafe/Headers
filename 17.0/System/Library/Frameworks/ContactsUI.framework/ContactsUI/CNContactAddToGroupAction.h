@class CNGroup, NSArray, UINavigationController, CNUIGroupsAndContainersSaveManager, CNContactStore, CNManagedConfiguration, NSString;

@interface CNContactAddToGroupAction : CNContactAction <CNContactGroupPickerViewControllerDelegate>

@property (retain, nonatomic) CNGroup *selectedGroup;
@property (retain, nonatomic) NSArray *contactParentGroupIdentifiers;
@property (retain, nonatomic) UINavigationController *groupPickerNavigationViewController;
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSArray *contactParentGroups;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (id)sourceAccountExternalIdentifiers;
- (void).cxx_destruct;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContact:(id)a1 propertyKey:(id)a2 labeledValue:(id)a3;
- (void)groupPicker:(id)a0 didSelectGroup:(id)a1;
- (BOOL)groupPicker:(id)a0 shouldEnableGroupWithIdentifier:(id)a1;
- (void)groupPickerDidCancel:(id)a0;
- (void)performActionWithSender:(id)a0;

@end
