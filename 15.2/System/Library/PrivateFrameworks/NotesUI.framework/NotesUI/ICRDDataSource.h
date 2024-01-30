@class NSArray, UICollectionViewDiffableDataSource, UICollectionView;

@interface ICRDDataSource : NSObject

@property (retain, nonatomic) NSArray *sectionControllers;
@property (nonatomic) BOOL isAddingOrRemovingPassword;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource;
@property (copy, nonatomic) id /* block */ willExpandItemHandler;
@property (copy, nonatomic) id /* block */ willCollapseItemHandler;
@property (readonly, nonatomic) id firstRelevantItemIdentifier;

- (void)willEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0 cellProvider:(id /* block */)a1;
- (void)dealloc;
- (void)reloadDataAnimated:(BOOL)a0;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (void)reindexDataAnimated:(BOOL)a0;
- (void)noteDidAddOrRemovePassword:(id)a0;
- (void)reloadDataAnimated:(BOOL)a0 dataIndexedBlock:(id /* block */)a1 dataRenderedBlock:(id /* block */)a2;
- (void)reindexDataAnimated:(BOOL)a0 dataIndexedBlock:(id /* block */)a1 dataRenderedBlock:(id /* block */)a2;
- (void)accountHidesSystemPaperNotesInCustomFoldersDidChange:(id)a0;
- (void)noteWillAddOrRemovePassword:(id)a0;
- (id)associatedCellsForManagedObjectIDs:(id)a0;

@end
