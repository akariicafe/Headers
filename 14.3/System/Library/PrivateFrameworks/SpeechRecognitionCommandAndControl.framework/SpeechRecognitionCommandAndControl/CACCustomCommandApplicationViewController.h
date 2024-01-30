@class NSArray, CACSpokenCommandItem, NSDictionary;
@protocol CACCustomCommandApplicationViewControllerDelegate;

@interface CACCustomCommandApplicationViewController : UITableViewController

@property (retain, nonatomic) NSArray *sortedNames;
@property (retain, nonatomic) NSArray *sortedIdentifiers;
@property (weak, nonatomic) id<CACCustomCommandApplicationViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)isModalInPresentation;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
