@class NSArray, NSString, CNContact, UITableView;
@protocol CNContactGroupPickerDelegate;

@interface CNContactPropertyGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_pickableGroups;
    UITableView *_tableView;
}

@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (weak, nonatomic) id<CNContactGroupPickerDelegate> groupPickerDelegate;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pickableGroupsWithPickedGroups:(id)a0 policy:(id)a1 prohibitedPropertyKeys:(id)a2 contact:(id)a3;
+ (BOOL)propertiesLeftToPickWithPickedGroups:(id)a0 policy:(id)a1;
+ (BOOL)propertiesLeftToPickWithPickedGroups:(id)a0 policy:(id)a1 prohibitedPropertyKeys:(id)a2;
+ (BOOL)propertiesLeftToPickWithPickedGroups:(id)a0 policy:(id)a1 prohibitedPropertyKeys:(id)a2 contact:(id)a3;
+ (id)propertySections;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (id)initWithGroups:(id)a0;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (id)_loadPickableGroupsWithPickedGroups:(id)a0 policy:(id)a1;

@end
