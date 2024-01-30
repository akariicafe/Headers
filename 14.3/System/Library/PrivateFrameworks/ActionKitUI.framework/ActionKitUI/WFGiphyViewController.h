@class WFGiphySessionManager, UICollectionView, NSArray, UICollectionViewFlowLayout, UIView, NSString;
@protocol WFGiphyViewControllerDelegate;

@interface WFGiphyViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UISearchBarDelegate>

@property (readonly, weak, nonatomic) UIView *emptyListView;
@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) WFGiphySessionManager *sessionManager;
@property (copy, nonatomic) NSArray *objects;
@property (nonatomic) BOOL selectMultiple;
@property (copy, nonatomic) NSString *query;
@property (weak, nonatomic) id<WFGiphyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)accessibilityPerformEscape;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)done;

@end
