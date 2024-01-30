@class PXPeopleBootstrapContext, PXPeopleSuggestionManager, PXPeopleSwipeSelectionManager, NSArray, NSTimer, NSString;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapConfirmationViewController : UICollectionViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSwipeSelectionManagerDelegate, PXPeopleFlowViewController>

@property (retain, nonatomic) PXPeopleSwipeSelectionManager *swipeSelectionManager;
@property (readonly, nonatomic) PXPeopleSuggestionManager *suggestionManager;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property (readonly, nonatomic) NSArray *presentationStatuses;
@property (retain, nonatomic) NSArray *currentSuggestions;
@property (retain, nonatomic) NSTimer *loadingDelayTimer;
@property (nonatomic) BOOL suggestionsPresented;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL willAppear;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (id)swipeSelectionManager:(id)a0 indexPathSetFromIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)swipeSelectionManager:(id)a0 itemIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_localizedPromptString;
- (void)willTransitionToNextInFlow;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)a0;
- (void)swipeSelectionManager:(id)a0 didSelectIndexPaths:(id)a1;
- (id)initWithContext:(id)a0 dataSource:(id)a1;
- (void)_updateViewWithViewState:(unsigned long long)a0;
- (void)_finishedPresentingSuggestions;
- (void)_evaluateIfSuggestionPresentationFinished;
- (void)_markSkippedSuggestions;
- (void)_noSuggestionsFound;
- (void)_startLoadingTimer;
- (void)_toggleConfirmedForCollectionViewCell:(id)a0 atIndex:(unsigned long long)a1;
- (void)_updateHeaderContent;
- (double)_wonkyAutomaticContentOffset;
- (void)_badgeLoadingCells;
- (id)_sortedIndexPathsForVisibleCells;
- (void)_cacheCurrentSuggestions;
- (void)updateImageForCell:(id)a0 withPerson:(id)a1;
- (void)keyFaceUpdated:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_sectionInsets;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)a0;
- (void)suggestionManager:(id)a0 hasNewSuggestionsAvailable:(id)a1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)a0;
- (void)viewDidLoad;

@end
