@interface PHSmartAlbum : PHAssetCollection

+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;

- (BOOL)collectionHasFixedOrder;

@end
