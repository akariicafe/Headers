@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation;
@property (weak, nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate;

- (void)setResults:(id)a0;
- (void)selectPreviousSearchResult;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)searchQueryStarted;
- (void)selectNextSearchResult;
- (void)viewDidLoad;
- (void)searchQueryCompleted;
- (void)showSelectedSearchResult;
- (id)init;
- (void)searchQueryFoundItems:(id)a0;
- (void)_selectAndScrollToIndexPath:(id)a0;
- (double)iconWidth;
- (void).cxx_destruct;
- (unsigned long long)totalSearchResults;

@end
