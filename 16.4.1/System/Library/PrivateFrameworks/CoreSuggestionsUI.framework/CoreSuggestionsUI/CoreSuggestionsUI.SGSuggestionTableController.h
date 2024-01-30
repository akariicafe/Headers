@interface CoreSuggestionsUI.SGSuggestionTableController : UIViewController <SGSuggestionViewControllerPresenter> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ tableViewController;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ presenterDelegate;
    void /* unknown type, empty encoding */ suggestionPresenter;
    void /* unknown type, empty encoding */ suggestionList;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dismissViewController:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissalPressed:(id)a0;
- (id)initWithStore:(id)a0 delegate:(id)a1 suggestionPresenter:(id)a2 suggestionList:(id)a3;
- (void)updateWithSuggestionStore:(id)a0;

@end
