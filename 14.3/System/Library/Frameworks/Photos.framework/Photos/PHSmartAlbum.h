@interface PHSmartAlbum : PHAssetCollection

+ (id)fetchType;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;
+ (id)managedEntityName;
+ (id)_collectionSubtypeExpressionForFetchRequests;

- (BOOL)collectionHasFixedOrder;

@end
