@class NSTimer, PXPeopleSuggestionView, PXPeopleConfirmationSummaryViewController, PXPeopleConfirmationLoadingView, PXPeopleSuggestionManager, PXAnimatedHeaderView, NSString, UILabel, UIActivityIndicatorView;

@interface PXPeopleConfirmationViewController : UIViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate>

@property (retain, nonatomic) PXPeopleSuggestionView *suggestionView;
@property (retain, nonatomic) PXAnimatedHeaderView *headerView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) PXPeopleConfirmationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *interimLoadingLabel;
@property (retain, nonatomic) UIActivityIndicatorView *interimLoadingIndicator;
@property (retain, nonatomic) PXPeopleConfirmationSummaryViewController *summaryViewController;
@property (retain, nonatomic) NSTimer *loadingDelayTimer;
@property (nonatomic) BOOL suggestionsPresented;
@property (nonatomic) BOOL showTypeDebugColor;
@property (readonly) PXPeopleSuggestionManager *suggestionManager;
@property (readonly) BOOL isSummaryViewShowing;
@property (nonatomic) unsigned long long viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (id)initWithPerson:(id)a0;
- (id)personForSummaryViewController:(id)a0;
- (unsigned long long)autoConfirmedCountForSummaryViewController:(id)a0;
- (void)confirmTapped:(id)a0;
- (void)confirmationCountUpdatedForSuggestionManager:(id)a0 undoing:(BOOL)a1;
- (void)denyTapped:(id)a0;
- (void)dismissSummary;
- (void)displaySummary;
- (void)doneTapped:(id)a0;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)a0;
- (void)performUndo:(id)a0;
- (void)presentSuggestion:(id)a0 animated:(BOOL)a1;
- (void)suggestionDidDisplay;
- (void)suggestionManager:(id)a0 hasNewSuggestionsAvailable:(id)a1;
- (void)undoConfirm:(id)a0;
- (void)undoDeny:(id)a0;
- (void)updateViewWithViewState:(unsigned long long)a0;
- (unsigned long long)userConfirmedCountForSummaryViewController:(id)a0;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)a0;

@end
