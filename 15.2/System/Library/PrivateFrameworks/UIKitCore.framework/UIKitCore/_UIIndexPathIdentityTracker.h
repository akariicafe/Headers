@class UICollectionView, NSMutableDictionary, UITableView;

@interface _UIIndexPathIdentityTracker : NSObject {
    UITableView *_tableView;
    UICollectionView *_collectionView;
    id _identityBasedDataSource;
    NSMutableDictionary *_mapping;
    BOOL _enforcesManualMapping;
}

- (id)initWithCollectionView:(id)a0;
- (void)updateWithUpdateItems:(id)a0;
- (id)initWithTableView:(id)a0;
- (id)_mappingIdentifierForSanitizedIndexPath:(id)a0;
- (void)enforceManualMapping;
- (void).cxx_destruct;
- (id)currentIndexPathForIdentifier:(id)a0;
- (id)init;
- (void)reset;
- (id)identifierForIndexPath:(id)a0;

@end
