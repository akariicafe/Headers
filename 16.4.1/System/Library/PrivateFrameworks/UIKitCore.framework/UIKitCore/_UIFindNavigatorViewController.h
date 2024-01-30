@class _UIFindNavigatorView, NSString, NSArray, UITextSearchOptions, UIResponder, UIFindSession;
@protocol _UIFindNavigatorViewControllerDelegate;

@interface _UIFindNavigatorViewController : UIInputViewController <_UIFindNavigatorViewDelegate, UIPredictiveViewController> {
    long long _assistantBarStyle;
    _UIFindNavigatorView *_findNavigatorView;
    NSArray *_extraKeyCommands;
    NSString *_lastSearchQuery;
    UITextSearchOptions *_lastSearchOptions;
    BOOL _performingReplacement;
}

@property (readonly, nonatomic) BOOL hostedInKeyboard;
@property (retain, nonatomic) UIFindSession *findSession;
@property (readonly, nonatomic) _UIFindNavigatorView *findNavigatorView;
@property (weak, nonatomic) id<_UIFindNavigatorViewControllerDelegate> findNavigatorViewControllerDelegate;
@property (weak, nonatomic) UIResponder *parentResponder;
@property (nonatomic) unsigned long long tintTechnique;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

- (void)find:(id)a0;
- (void)_textViewDidChangeNotification:(id)a0;
- (id)parentFocusEnvironment;
- (void)viewWillMoveToWindow:(id)a0;
- (id)_configuredSearchOptions;
- (id)traitCollection;
- (BOOL)allowsCompactAssistantBar;
- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)_dismissesKeyboardOnReturn;
- (void)_replaceFieldDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)nextResponder;
- (void)_finishSearchingOnResignIfNecessary;
- (void)resignFirstResponderAndFinishSearching;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void)updateViewForActiveFindSession;
- (void)findNext:(id)a0;
- (void)findNavigatorDidInvalidateSearchSession:(id)a0;
- (void)_didEnterReplacementString:(id)a0;
- (void)_handleInsertNewline:(id)a0;
- (void)setAssistantBarStyle:(long long)a0;
- (void)viewDidLoad;
- (void)_didEnterSearchQuery:(id)a0;
- (void)_handleDone:(id)a0;
- (void)_updateReplaceButtonEnabled;
- (void)_recomputeConfiguredSearchOptions;
- (void)_windowDidChangeToFirstResponder:(id)a0;
- (id)keyCommands;
- (void)findAndReplace:(id)a0;
- (void)_performSearchWithQuery:(id)a0 options:(id)a1;
- (double)preferredWidthForTraitCollection:(id)a0;
- (id)undoManager;
- (void)findNavigator:(id)a0 didChangeMode:(long long)a1;
- (void)_updateReturnKeyType;
- (void)findPrevious:(id)a0;
- (void)_updateResultsCount;
- (void)buildMenuWithBuilder:(id)a0;
- (void)findNavigator:(id)a0 didInvokeNextResultInDirection:(long long)a1;
- (void)_handleSearchReturn:(id)a0;
- (BOOL)findNavigatorShouldShowReplacementOption:(id)a0;
- (void)_performAutoSearch;
- (void)findNavigator:(id)a0 didInvokeReplaceReplacingAll:(BOOL)a1;
- (void)_handleHighlightPreviousResult:(id)a0;
- (void).cxx_destruct;
- (void)_searchTextFieldChanged:(id)a0;
- (void)loadView;

@end
