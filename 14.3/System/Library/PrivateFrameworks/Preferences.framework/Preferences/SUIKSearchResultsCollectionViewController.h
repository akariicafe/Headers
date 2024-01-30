@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation;
@property (weak, nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (id)init;
- (void)searchQueryCompleted;
- (void).cxx_destruct;
- (void)setResults:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)searchQueryStarted;
- (double)iconWidth;
- (void)_selectAndScrollToIndexPath:(id)a0;
- (void)searchQueryFoundItems:(id)a0;
- (void)showSelectedSearchResult;
- (void)viewDidLoad;

@end
