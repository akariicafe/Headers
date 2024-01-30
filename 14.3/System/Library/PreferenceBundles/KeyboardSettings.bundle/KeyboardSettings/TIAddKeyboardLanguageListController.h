@class TIAboutKeyboardPrivacyController, NSString;

@interface TIAddKeyboardLanguageListController : PSListController <UITextViewDelegate>

@property (retain, nonatomic) TIAboutKeyboardPrivacyController *aboutPrivacyController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonTapped;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)viewDidLoad;
- (void)dismissForDone;
- (void)willResume;
- (void)showAddSystemKeyboardSheet:(id)a0;
- (void)showAddExtensionKeyboardSheet:(id)a0;
- (void)handleSoleInputModeAddition:(id)a0;

@end
