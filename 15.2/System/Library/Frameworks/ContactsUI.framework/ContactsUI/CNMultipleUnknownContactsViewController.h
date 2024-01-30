@class CNContactFormatter, NSArray, CNContactStore, NSMutableSet, NSString;
@protocol CNMultipleUnknownContactsViewControllerDelegate;

@interface CNMultipleUnknownContactsViewController : UITableViewController <CNContactViewControllerDelegate>

@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSMutableSet *createdContactIdentifiers;
@property (retain, nonatomic) CNContactFormatter *formatter;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id<CNMultipleUnknownContactsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)contactFormatter;

- (void)_didComplete;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_save:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (id)initWithContacts:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_showAddAllToContactsConfirmation;
- (void)_createNewContacts:(id)a0;
- (void)_addToExistingContacts:(id)a0;
- (void)_presentUnknownContact:(id)a0;
- (id)_existingMatchForUnknownContact:(id)a0;
- (id)_updatedContact:(id)a0 withPropertiesFromContact:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;

@end
