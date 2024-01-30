@class NSArray, CACSpokenCommandItem, NSDictionary;
@protocol CACCustomCommandApplicationViewControllerDelegate;

@interface CACCustomCommandApplicationViewController : UITableViewController

@property (retain, nonatomic) NSArray *sortedNames;
@property (retain, nonatomic) NSArray *sortedIdentifiers;
@property (weak, nonatomic) id<CACCustomCommandApplicationViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isModalInPresentation;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
