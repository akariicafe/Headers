@class UISearchBar, UISearchController, UITableView, CNUIFamilyMemberContactsEditingStrategy, CNContactViewController, CNUICoreContactEditingSession, NSString, CNContactFormatter, FAFamilyMember, CNContact, NSArray, CNUIFamilyMemberDowntimeContactDataSource, NSIndexPath;
@protocol CNUIFamilyMemberDowntimeContactPickerControllerDelegate;

@interface CNUIFamilyMemberDowntimeContactPickerController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, UIAdaptivePresentationControllerDelegate, CNContactContentViewControllerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) NSIndexPath *presentedContactIndexPath;
@property (retain, nonatomic) CNContactViewController *contactViewController;
@property (readonly, nonatomic) CNContactFormatter *contactCellLabelFormatter;
@property (readonly, nonatomic) CNContactFormatter *contactCardWarningFormatter;
@property (readonly, nonatomic) CNUIFamilyMemberDowntimeContactDataSource *dataSource;
@property (readonly, nonatomic) CNUICoreContactEditingSession *editingSessionFromContactViewController;
@property (readonly, nonatomic) CNUIFamilyMemberContactsEditingStrategy *editingStrategy;
@property (readonly, nonatomic) FAFamilyMember *childFamilyMember;
@property (readonly, nonatomic) NSArray *allFamilyMembers;
@property (readonly, nonatomic) CNContact *preferredForNameMeContact;
@property (nonatomic) BOOL initialSelectionPerformed;
@property (weak, nonatomic) id<CNUIFamilyMemberDowntimeContactPickerControllerDelegate> delegate;
@property (nonatomic) BOOL shouldPreselectFamilyMemberContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;
+ (id)familyCircle;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContact:(id)a1 propertyKey:(id)a2 propertyIdentifier:(id)a3;
- (id)initWithChildFamilyMember:(id)a0 allFamilyMembers:(id)a1 contactStore:(id)a2 editingStrategy:(id)a3 showingFamilyMemberContacts:(BOOL)a4;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupUI;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)setupSearchController;
- (void)setupSearchBar;
- (id)initWithChildFamilyMember:(id)a0 allFamilyMembers:(id)a1 contactStore:(id)a2;
- (void)setupTableView;
- (void)configureNavigationItem;
- (void)startObservingKeyboardChanges;
- (void)keyboardWillChange:(id)a0;
- (void)saveSanitizedSelectedContacts:(id)a0;
- (id)warningMessageForContact:(id)a0;
- (void).cxx_destruct;
- (void)done:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;

@end
