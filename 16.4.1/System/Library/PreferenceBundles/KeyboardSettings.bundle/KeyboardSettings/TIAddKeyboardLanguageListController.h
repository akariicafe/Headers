@class TIAboutKeyboardPrivacyController, NSString, NSOperationQueue;

@interface TIAddKeyboardLanguageListController : PSListController <UITextViewDelegate, UISearchBarDelegate>

@property (retain, nonatomic) TIAboutKeyboardPrivacyController *aboutPrivacyController;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSOperationQueue *searchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonTapped;
- (void)dismissForDone;
- (id)generateSpecifiers;
- (void)handleSoleInputModeAddition:(id)a0;
- (BOOL)inputMode:(id)a0 matchesPredicate:(id)a1;
- (void)showAddExtensionKeyboardSheet:(id)a0;
- (void)showAddSystemKeyboardSheet:(id)a0;
- (void)willResume;

@end
