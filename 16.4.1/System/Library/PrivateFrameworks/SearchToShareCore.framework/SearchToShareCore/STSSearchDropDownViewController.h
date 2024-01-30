@class CategoriesDataSource, SuggestionsDataSource, NSString, STSDropDownRootView, STSSearchModel;
@protocol PopUpSearchViewDelegate, PopUpPlugin, STSSearchDropDownViewControllerDelegate;

@interface STSSearchDropDownViewController : UIViewController <STSCategorySelectionDelegate, STSSuggestionSelectionDelegate, STSSearchModelUpdateDelegate, PopUpPresentationDelegate, PopUpLegalDelegate, STSKeyCommandDelegate> {
    NSString *_currentQuery;
    BOOL _didSendCategoryResultFeedback;
    unsigned long long _popUpShowing;
}

@property (retain, nonatomic) STSDropDownRootView *view;
@property (retain, nonatomic) CategoriesDataSource *categoriesDataSource;
@property (retain, nonatomic) SuggestionsDataSource *suggestionsDataSource;
@property (retain, nonatomic) id<PopUpPlugin> popUpPlugin;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) BOOL sendFeedbackOnViewDidAppear;
@property (readonly, nonatomic) STSSearchModel *searchModel;
@property (weak, nonatomic) id<STSSearchDropDownViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PopUpSearchViewDelegate> locationDelegate;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)_updateSuggestions;
- (id)initWithSearchModel:(id)a0;
- (void)showSuggestions;
- (void)close;
- (void).cxx_destruct;
- (void)didPressDownKey;
- (void)didRequestClose;
- (void)_showLegalNotice;
- (void)categoryViewController:(id)a0 didSelectCategory:(id)a1 suggested:(BOOL)a2;
- (void)categoryViewController:(id)a0 didSelectRecent:(id)a1;
- (void)categoryViewControllerDidSelectClearRecentsButton:(id)a0;
- (void)clearRecents;
- (void)didCloseDropDown;
- (void)didPressReturnKey:(id)a0;
- (void)didPressUpKey;
- (void)dropDownContentViewControllerShouldDismiss;
- (void)searchModelUpdated;
- (void)searchModelUpdatedQuerySuggestions:(id)a0;
- (void)searchModelWillFetchQuerySuggestionsCompletions:(id)a0;
- (void)sendVisibleResultsFeedback;
- (BOOL)shouldShowLegalNotice;
- (void)showCategories;
- (void)showPickerAndPerformQuery:(id)a0 requestType:(long long)a1;
- (void)showSuggestionsIfNeccessary;
- (void)suggestionViewController:(id)a0 didSelectSuggestion:(id)a1 suggested:(BOOL)a2;

@end
