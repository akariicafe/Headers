@class STContentPrivacyMediaRestrictionsDetailController, NSObject;
@protocol STContentPrivacyViewModelCoordinator;

@interface STWebFilterDetailController : PSListController

@property (weak) STContentPrivacyMediaRestrictionsDetailController *parentMediaRestrictionsController;
@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (void)willResignActive;
- (id)init;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)getItemSpecifierValue:(id)a0;
- (id)groupSpecifierWithConfiguration:(id)a0 key:(id)a1 footerText:(id)a2 radio:(BOOL)a3;
- (id)listItemSpecifierWithGroup:(id)a0 name:(id)a1 value:(id)a2;
- (id)_listItemSpecifiersForSitesGroup:(id)a0;
- (void)addSite:(id)a0;
- (id)_addButtonSpecifierWithGroup:(id)a0 action:(SEL)a1;
- (id)_listItemSpecifiersForNamedSitesGroup:(id)a0;
- (void)addNamedSite:(id)a0;
- (void)updateParent;
- (void)saveRemovingItem:(id)a0 value:(id)a1;
- (void)saveItemValue:(id)a0 specifier:(id)a1;

@end
