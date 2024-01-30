@class SCLListViewController, SCLSettingsViewModel, NSArray;

@interface SCLSpecifierDataSource : NSObject

@property (weak, nonatomic) SCLListViewController *listController;
@property (readonly, nonatomic) SCLSettingsViewModel *viewModel;
@property (readonly, nonatomic) NSArray *allSpecifiers;
@property (copy, nonatomic) NSArray *specifiers;
@property (copy, nonatomic) NSArray *childDataSources;
@property (nonatomic, getter=isActive) BOOL active;

+ (id)keyPathsForValuesAffectingAllSpecifiers;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithListController:(id)a0 viewModel:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 specifier:(id)a2;

@end
