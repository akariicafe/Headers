@class UIControl, NSArray, NSString, NSMutableSet, UIView, SearchUITableModel;
@protocol UITextInput, SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener, SearchUISizingDelegate, SearchUIKeyboardableTableViewDelegate;

@interface SearchUIResultsCollectionViewController : SearchUICollectionViewController <SearchUITableHeaderViewDelegate, SearchUITableHeaderCommandDelegate, SearchUIResultsTableBridgingProtocol>

@property (nonatomic) double cachedHeaderHeight;
@property (retain, nonatomic) NSMutableSet *expandedSections;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (retain, nonatomic) NSArray *hiddenSections;
@property (readonly, nonatomic) double headerHeight;
@property (retain, nonatomic) NSString *queryString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
@property (nonatomic) BOOL shortenTopFloatingHeader;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) id /* block */ cellWillDisplayHandler;
@property (copy, nonatomic) id /* block */ tableViewWillUpdateHandler;
@property (copy, nonatomic) id /* block */ tableViewDidUpdateHandler;

+ (id)hiddenSectionsFromSections:(id)a0;

- (void)returnKeyPressed;
- (BOOL)sectionShouldBeExpanded:(id)a0;
- (void)highlightRowAtIndexPath:(id)a0;
- (id)majorScrollView;
- (void)purgeAndResetTable;
- (void)viewWillAppear:(BOOL)a0;
- (void)resignTextFieldIfNeeded;
- (void)showMoreSectionsWithShowMoreButtonRowModel:(id)a0;
- (long long)_focusItemDeferralMode;
- (BOOL)updateMustAccountForLayout;
- (void)setFocusableIndexPath:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)didPresentToResumeSearch:(BOOL)a0;
- (id)commandEnvironment;
- (void)highlightResult:(id)a0;
- (void).cxx_destruct;
- (void)willDismiss;
- (void)scrollTableToTop;
- (id)init;
- (void)expandCellsIfNeeded;
- (id)preferredFocusEnvironments;
- (id)cellForItemAtIndexPath:(id)a0;
- (void)toggleExpansionForSection:(id)a0;
- (void)replaceResult:(id)a0 withResult:(id)a1;
- (void)performExpansion:(BOOL)a0 withSectionIndex:(unsigned long long)a1;
- (void)updateWithResultSections:(id)a0 scrollToTop:(BOOL)a1;

@end
