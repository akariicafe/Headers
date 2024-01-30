@class NSArray, SCLSpecifierDataSource;

@interface SCLListViewController : PSListController

@property (nonatomic) long long updateCount;
@property (copy, nonatomic) NSArray *pendingUpdateStartSpecifiers;
@property (copy, nonatomic) NSArray *pendingUpdateEndSpecifiers;
@property (retain, nonatomic) SCLSpecifierDataSource *specifierSource;
@property (nonatomic) BOOL wantsEditingMode;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)specifiers;
- (id)init;
- (void)endUpdates;
- (void).cxx_destruct;
- (void)beginUpdates;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)loadSpecifierSource;
- (void)reevaluateEditingMode;

@end
