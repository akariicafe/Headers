@class PFCloudKitStoreComparisonCache;

@interface PFCloudKitStoreComparer : NSObject

@property (readonly, nonatomic) BOOL checkCloudKitMetadata;
@property (readonly, nonatomic) PFCloudKitStoreComparisonCache *cache;

+ (id)trimExcessiveValuesForLog:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)ensureContentsOfStore:(id)a0 matchContentsOfStore:(id)a1 error:(id *)a2;
- (BOOL)ensureStoresAgreeOnCloudKitTables:(id)a0 error:(id *)a1;
- (BOOL)compareContentOfStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (BOOL)compareCloudKitMetadataOfStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (id)deriveIdentifierForNonCloudObjectID:(id)a0;
- (BOOL)populateCacheForStore:(id)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)compareAttributesOnObject:(id)a0 toObject:(id)a1 error:(id *)a2;
- (id)getObjectMatchingRecordID:(id)a0 fromStore:(id)a1 withManagedObjectContext:(id)a2;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1 forAttribute:(id)a2;
- (BOOL)compareRelationshipsOfRecordID:(id)a0 withStoreObject:(id)a1 andOtherObject:(id)a2 error:(id *)a3;
- (BOOL)validateValue:(id)a0 againstOtherValue:(id)a1 forIgnoredAttribute:(id)a2;
- (id)getRecordIDsForRelationship:(id)a0 onObject:(id)a1;

@end
