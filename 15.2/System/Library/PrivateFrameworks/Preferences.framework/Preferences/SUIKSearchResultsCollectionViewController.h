@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation;
@property (weak, nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate;

- (void)setResults:(id)a0;
- (void)searchQueryFoundItems:(id)a0;
- (void)_selectAndScrollToIndexPath:(id)a0;
- (void)searchQueryCompleted;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)iconWidth;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void).cxx_destruct;
- (id)init;
- (void)showSelectedSearchResult;
- (void)searchQueryStarted;

@end
