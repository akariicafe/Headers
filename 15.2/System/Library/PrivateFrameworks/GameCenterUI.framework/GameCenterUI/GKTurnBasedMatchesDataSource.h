@class NSObject, GKGame;
@protocol GKTurnBasedMatchesDataSourceDelegate;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource

@property (retain, nonatomic) GKGame *game;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cellMarginInsets;
@property (weak, nonatomic) NSObject<GKTurnBasedMatchesDataSourceDelegate> *delegate;

- (unsigned long long)numberOfMatches;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)configureDataSource;
- (void)configureCollectionView:(id)a0;
- (void)removeItemAtIndexPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)collectionViewWillBecomeActive:(id)a0;

@end
