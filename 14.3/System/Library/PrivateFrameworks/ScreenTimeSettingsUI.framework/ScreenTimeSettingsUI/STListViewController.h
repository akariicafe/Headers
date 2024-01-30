@class NSArray, NSMutableDictionary, NSString;

@interface STListViewController : PSListController <STGroupSpecifierProviderDelegate>

@property (retain, nonatomic) NSMutableDictionary *cellHeightBySpecifierIdentifier;
@property (copy, nonatomic) NSArray *specifierProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)specifierProvider:(id)a0 reloadSpecifier:(id)a1 animated:(BOOL)a2;
- (void)specifierProvider:(id)a0 reloadSectionHeaderFootersWithAnimation:(long long)a1;
- (void)specifierProvider:(id)a0 showController:(id)a1 animated:(BOOL)a2;
- (void)specifierProvider:(id)a0 presentViewController:(id)a1 animated:(BOOL)a2;
- (void)specifierProvider:(id)a0 dismissViewControllerAnimated:(BOOL)a1;
- (void)specifierProvider:(id)a0 showConfirmationViewForSpecifier:(id)a1;
- (void)specifierProvider:(id)a0 popToViewControllerAnimated:(BOOL)a1;
- (void)specifierProvider:(id)a0 presentViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)specifierProviderBeginUpdates:(id)a0;
- (void)specifierProviderEndUpdates:(id)a0;
- (void)specifierProvider:(id)a0 lazyLoadBundle:(id)a1;
- (void)specifierProvider:(id)a0 showPINSheet:(id)a1;
- (void)removeObserversForSpecifierProvider:(id)a0;
- (void)addObserversForSpecifierProvider:(id)a0;
- (id)visibleSpecifierProviders;

@end
