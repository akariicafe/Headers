@interface CoreSuggestionsUI.SGSuggestionTableController : UIViewController <SGSuggestionViewControllerPresenter> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ notificationObserver;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithStore:(id)a0;
- (void)dismissViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)presentViewController:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dismissalPressed:(id)a0;

@end
