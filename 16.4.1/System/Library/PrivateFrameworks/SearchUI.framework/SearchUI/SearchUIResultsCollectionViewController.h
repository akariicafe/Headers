@class UIControl, NSArray, NSString, NSMutableSet, UIView, SearchUITableModel;
@protocol UITextInput, SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener, SearchUISizingDelegate, SearchUIKeyboardableTableViewDelegate;

@interface SearchUIResultsCollectionViewController : SearchUICollectionViewController <SearchUIResultsTableBridgingProtocol>

@property (nonatomic) double cachedHeaderHeight;
@property (retain, nonatomic) NSMutableSet *expandedSections;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (retain, nonatomic) NSArray *hiddenSections;
@property (readonly, nonatomic) double headerHeight;
@property (weak) id<SearchUISizingDelegate> sizingDelegate;
@property (weak) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (weak) UIControl<UITextInput> *textField;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ viewWillUpdateHandler;
@property (copy, nonatomic) id /* block */ viewDidUpdateHandler;

+ (id)hiddenSectionsFromSections:(id)a0;

- (id)majorScrollView;
- (id)cellForItemAtIndexPath:(id)a0;
- (void)highlightRowAtIndexPath:(id)a0;
- (BOOL)sectionShouldBeExpanded:(id)a0;
- (BOOL)canHighlightRowAtIndexPath:(id)a0;
- (void)returnKeyPressed;
- (void)updateWithResultSections:(id)a0 scrollToTop:(BOOL)a1;
- (void)showMoreSectionsWithShowMoreButtonIndexPath:(id)a0;
- (BOOL)updateMustAccountForLayout;
- (void)scrollTableToTop;
- (void)replaceResult:(id)a0 withResult:(id)a1;
- (void)didPresentToResumeSearch:(BOOL)a0;
- (void)toggleExpansionForSection:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)preferredFocusEnvironments;
- (void)expandCellsIfNeeded;
- (void)purgeAndResetTable;
- (id)commandEnvironment;
- (long long)_focusItemDeferralMode;
- (void)willDismiss;
- (BOOL)indexPathIsShowMoreSections:(id)a0;
- (id)init;
- (void)didToggleExpansion;
- (id)tableModelForExpansion;
- (void)resignTextFieldIfNeeded;
- (void)setFocusableIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)highlightResult:(id)a0;
- (void)viewWillAppear:(BOOL)a0;

@end
