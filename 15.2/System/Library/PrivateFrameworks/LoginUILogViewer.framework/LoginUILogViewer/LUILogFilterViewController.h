@class NSString, LUILogFilterView;
@protocol LUILogFilterViewControllerDelegate;

@interface LUILogFilterViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UITableViewDelegate, UITableViewDataSource, LUILogFilterCurrentPredicateTableViewCellDelegate, UITextFieldDelegate>

@property (retain, nonatomic) LUILogFilterView *filterView;
@property (weak, nonatomic) id<LUILogFilterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)_setupTableView;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (BOOL)textFieldShouldClear:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)_setupButtons;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_setupCollectionView;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)keyboardWillShow:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)addButtonTapped:(id)a0;
- (void)predicateDataUpdated;
- (void)predicateTableViewCellDeleteButtonTapped:(id)a0;
- (void)applyButtonTapped:(id)a0;
- (id)predicateValueCandidates;
- (id)sizeArrayWithStrings:(id)a0;
- (id)predicateKeyCandidates;
- (id)predicateComparisonCandidates;
- (void)_clearCellsSelection;
- (void)_shakeInputView:(id)a0;
- (void)_clearPredicateInput;
- (void)_updatePredicateText;
- (id)predicateValueCandidatesSize;

@end
