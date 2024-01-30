@class TIAboutKeyboardPrivacyController, NSString, NSOperationQueue;

@interface TIAddKeyboardLanguageListController : PSListController <UITextViewDelegate, UISearchBarDelegate>

@property (retain, nonatomic) TIAboutKeyboardPrivacyController *aboutPrivacyController;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSOperationQueue *searchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)cancelButtonTapped;
- (id)init;
- (void)dealloc;
- (void)dismissForDone;
- (void)willResume;
- (id)generateSpecifiers;
- (BOOL)inputMode:(id)a0 matchesPredicate:(id)a1;
- (void)showAddSystemKeyboardSheet:(id)a0;
- (void)showAddExtensionKeyboardSheet:(id)a0;
- (void)handleSoleInputModeAddition:(id)a0;

@end
