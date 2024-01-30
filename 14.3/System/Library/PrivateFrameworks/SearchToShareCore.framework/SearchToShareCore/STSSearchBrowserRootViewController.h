@class STSSuggestionViewController, STSCategoryViewController, NSString, STSFeedbackReporter, STSSearchModel, STSSearchBrowserHeaderView, STSPicker, STSSearchBrowserRootView, NSMutableArray, UIViewController;
@protocol STSSearchBrowserRootViewControllerDelegate, STSPickerSelectionDelegate;

@interface STSSearchBrowserRootViewController : UIViewController <STSSuggestionViewControllerDelegate, STSCategoryViewControllerDelegate, UISearchBarDelegate> {
    UIViewController *_currentChildViewController;
    UIViewController *_legalNoticeViewController;
    double _keyboardHeight;
    double _topInset;
    double _bottomInset;
    NSMutableArray *_recentQueries;
    BOOL _didSendCategoryResultFeedback;
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) STSSearchBrowserRootView *view;
@property (retain, nonatomic) STSSuggestionViewController *suggestionViewController;
@property (retain, nonatomic) STSPicker *pickerViewController;
@property (readonly, nonatomic) STSFeedbackReporter *feedbackReporter;
@property (nonatomic) BOOL requestedExpandedPresentation;
@property (retain, nonatomic) STSCategoryViewController *categoryViewController;
@property (readonly, nonatomic) STSSearchBrowserHeaderView *searchHeaderView;
@property (weak, nonatomic) id<STSSearchBrowserRootViewControllerDelegate> selectionDelegate;
@property (weak, nonatomic) id<STSPickerSelectionDelegate> pickerSelectionDelegate;
@property (retain, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) STSSearchModel *searchModel;
@property (nonatomic) unsigned long long presentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateContentInsets;
- (void)setBottomInset:(double)a0;
- (id)initWithSearchModel:(id)a0;
- (void).cxx_destruct;
- (void)showSuggestions;
- (void)setTopInset:(double)a0;
- (void)_keyboardWillShow:(id)a0;
- (void)dealloc;
- (void)loadView;
- (void)resetContentOffset;
- (void)_keyboardWillHide:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)sendVisibleResultsFeedback;
- (void)categoryViewController:(id)a0 didSelectCategory:(id)a1 suggested:(BOOL)a2;
- (void)categoryViewController:(id)a0 didSelectRecent:(id)a1;
- (void)categoryViewControllerDidSelectClearRecentsButton:(id)a0;
- (void)categoryViewControllerScrollViewWillBeginDragging:(id)a0;
- (void)_showLegalNotice;
- (void)showCategories;
- (void)showPickerAndPerformQuery:(id)a0 requestType:(long long)a1;
- (void)_clearSuggestions;
- (void)_clearRecents;
- (void)_addQueryToRecents:(id)a0;
- (void)_transitionContentFromViewController:(id)a0 toViewController:(id)a1 completion:(id /* block */)a2;
- (void)suggestionViewController:(id)a0 didSelectSuggestionAtIndex:(unsigned long long)a1;
- (void)suggestionViewControllerDidTapLogo:(id)a0;
- (BOOL)isPickerVisible;
- (void)fetchCategories;

@end
