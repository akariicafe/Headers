@class NSArray, DOCUndoManager, NSString;

@interface DOCModifyFavoritesOperation : FPModifyFavoritesOperation <DOCUndoableOperation>

@property (readonly, nonatomic) NSArray *oldFavorites;
@property (readonly, nonatomic) NSArray *oldRanks;
@property (readonly, nonatomic) NSArray *updatedRanks;
@property (readonly, nonatomic) BOOL isUnfavorite;
@property (readonly, nonatomic) DOCUndoManager *undoManager;
@property (readonly, nonatomic) NSString *actionNameForUndoing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)currentFavoriteRanks;
- (id)currentFavorites;
- (id)favoriteRanksFromItems:(id)a0;
- (id)initWithItemsToFavorite:(id)a0 favoriteRanks:(id)a1 undoManager:(id)a2;
- (id)initWithItemsToUnfavorite:(id)a0 undoManager:(id)a1;
- (id)oldRanksForOperationItems;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (void)registerUndo;

@end
