@class NSArray, CACSpokenCommandItem, NSDictionary;
@protocol CACCustomCommandApplicationViewControllerDelegate;

@interface CACCustomCommandApplicationViewController : UITableViewController

@property (retain, nonatomic) NSArray *sortedNames;
@property (retain, nonatomic) NSArray *sortedIdentifiers;
@property (weak, nonatomic) id<CACCustomCommandApplicationViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)isModalInPresentation;

@end
