@class UICollectionView, NSMutableDictionary, UITableView;

@interface _UIIndexPathIdentityTracker : NSObject {
    UITableView *_tableView;
    UICollectionView *_collectionView;
    id _identityBasedDataSource;
    NSMutableDictionary *_mapping;
    BOOL _enforcesManualMapping;
}

- (id)initWithCollectionView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)_mappingIdentifierForSanitizedIndexPath:(id)a0;
- (void)enforceManualMapping;
- (void)updateWithUpdateItems:(id)a0;
- (id)currentIndexPathForIdentifier:(id)a0;
- (id)initWithTableView:(id)a0;
- (id)identifierForIndexPath:(id)a0;

@end
