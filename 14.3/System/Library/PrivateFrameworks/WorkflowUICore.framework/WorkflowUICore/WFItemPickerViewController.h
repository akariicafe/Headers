@class NSString, NSArray, WFAlertButton;

@interface WFItemPickerViewController : UITableViewController <WFAlertPresenter, UISearchResultsUpdating, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *allButtons;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *trailingNavigationButtons;
@property (retain, nonatomic) WFAlertButton *leadingNavigationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentAlert:(id)a0 withUserInterface:(id)a1;

- (void)cancel;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)updatePreferredContentSize;
- (BOOL)accessibilityPerformEscape;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithAlert:(id)a0;
- (void)replaceButtonAtIndex:(unsigned long long)a0 withButton:(id)a1 forAlert:(id)a2;
- (void)dismissAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)setButtons:(id)a0 forAlert:(id)a1;
- (void)trailingNavigationButtonTapped:(id)a0;
- (void)reloadNavigationItems;
- (id)paletteForPrompt:(id)a0;
- (id)filteredButtons;

@end
