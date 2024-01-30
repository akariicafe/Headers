@class UINavigationController, NSString, NSArray, UITableViewController, UIViewController;

@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {
    NSString *_term;
    NSArray *_definitionValues;
    UINavigationController *_baseNavController;
    UITableViewController *_multiDefViewController;
    UIViewController *_longDefViewController;
    long long _oldPopoverStyle;
    BOOL _enableRotation;
    BOOL _previousIgnoreOrientation;
}

@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_colorAttributes;
+ (id)_defaultButtonImage;
+ (id)_localizedDictionaryTitleAttributes;
+ (id)_dictionaryDefinitionAttributes;
+ (BOOL)_shouldShowDefineForTerm:(id)a0;
+ (BOOL)_shouldShowDefineForTermOfLength:(long long)a0;
+ (BOOL)dictionaryHasDefinitionForTerm:(id)a0;
+ (id)_foregroundColor;
+ (id)_diddlyDoViewLineColor;
+ (id)_backgroundColor;
+ (id)_pressedButtonImage;

- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)a0;
- (void)window:(id)a0 setupWithInterfaceOrientation:(long long)a1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (BOOL)enableRotation;
- (id)_colorAttributes;
- (void)_willBecomeContentViewControllerOfPopover:(id)a0;
- (void)_searchWeb:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setPopoverController:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)setEnableRotation:(BOOL)a0;
- (id)initWithTerm:(id)a0;
- (void)pushDownloadManager:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_dismissModalReferenceView:(id)a0;
- (id)_defaultButtonImage;
- (void)_installDoneButtonOnViewControllerIfNeeded:(id)a0;
- (void)_installRequiredElementsOnViewController:(id)a0;
- (id)_localizedDictionaryTitleAttributes;
- (id)_dictionaryDefinitionAttributes;
- (id)_foregroundColor;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)_didResignContentViewControllerOfPopover:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)_diddlyDoViewLineColor;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_backgroundColor;
- (id)_pressedButtonImage;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
