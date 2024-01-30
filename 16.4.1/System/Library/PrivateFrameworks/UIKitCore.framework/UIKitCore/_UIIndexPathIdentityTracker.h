@class UICollectionView, NSMapTable, UITableView;

@interface _UIIndexPathIdentityTracker : NSObject {
    UITableView *_tableView;
    UICollectionView *_collectionView;
    id _identityBasedDataSource;
    NSMapTable *_mapping;
    BOOL _enforcesManualMapping;
}

- (id)initWithCollectionView:(id)a0;
- (id)initWithTableView:(id)a0;
- (void)updateWithUpdateItems:(id)a0;
- (id)init;
- (id)identifierForIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_manuallyUpdateWithUpdateItems:(id)a0;
- (void)_identifierBasedUpdateWithUpdateItems:(id)a0;
- (id)_mappingIdentifierForSanitizedIndexPath:(id)a0;
- (id)currentIndexPathForIdentifier:(id)a0;
- (void)enforceManualMapping;

@end
