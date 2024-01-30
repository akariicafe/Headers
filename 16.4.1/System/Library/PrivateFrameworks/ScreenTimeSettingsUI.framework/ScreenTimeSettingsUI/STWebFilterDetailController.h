@class STContentPrivacyMediaRestrictionsDetailController, NSObject;
@protocol STContentPrivacyViewModelCoordinator;

@interface STWebFilterDetailController : PSListController

@property (weak) STContentPrivacyMediaRestrictionsDetailController *parentMediaRestrictionsController;
@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (void)willResignActive;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)_addButtonSpecifierWithGroup:(id)a0 action:(SEL)a1;
- (id)_listItemSpecifiersForNamedSitesGroup:(id)a0;
- (id)_listItemSpecifiersForSitesGroup:(id)a0;
- (void)addNamedSite:(id)a0;
- (void)addSite:(id)a0;
- (id)getItemSpecifierValue:(id)a0;
- (id)groupSpecifierWithConfiguration:(id)a0 key:(id)a1 footerText:(id)a2 radio:(BOOL)a3;
- (id)listItemSpecifierWithGroup:(id)a0 name:(id)a1 value:(id)a2;
- (void)saveItemValue:(id)a0 specifier:(id)a1;
- (void)saveRemovingItem:(id)a0 value:(id)a1;
- (void)updateParent;

@end
