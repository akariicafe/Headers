@class UITableView, NSString, UICollectionView;
@protocol _UICollectionViewUpdateItemApplying, _UIDataSourceSnapshotTranslating;

@interface _UIDiffableDataSourceViewUpdater : NSObject <_UICollectionViewUpdateItemApplying>

@property (weak, nonatomic) id<_UICollectionViewUpdateItemApplying> updatesSink;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long sinkKind;
@property (retain, nonatomic) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot;
@property (nonatomic) BOOL hasPerformedInitialUpdate;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long tableViewRowAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performUpdateWithCollectionViewUpdateItems:(id)a0 dataSourceSnapshot:(id)a1 updateHandler:(id /* block */)a2 completion:(id /* block */)a3 viewPropertyAnimator:(id)a4 customAnimationsProvider:(id /* block */)a5 animated:(BOOL)a6;
- (void)_performMoveUpdate:(id)a0 onCollectionView:(id)a1;
- (void)_deleteAllItems;
- (id)initWithCollectionView:(id)a0;
- (id)targetView;
- (void)_performMoveUpdate:(id)a0 onTableView:(id)a1;
- (id)initWithTableView:(id)a0;
- (void)_performViewUpdates:(id)a0;
- (id)_sectionIndexesToReloadForTableViewCompatibility:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdatesSink:(id)a0 collectionView:(id)a1 tableView:(id)a2;
- (BOOL)_doesExpectedUpdate:(id)a0 matchActualUpdates:(id)a1 allowingEmptyUpdates:(BOOL)a2;
- (void)_willPerformDiff:(BOOL)a0;
- (void)_reloadData;
- (id)initWithCollectionViewUpdatesSink:(id)a0;

@end
