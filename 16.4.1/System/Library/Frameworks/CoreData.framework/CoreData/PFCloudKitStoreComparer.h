@class PFCloudKitArchivingUtilities, PFCloudKitStoreComparisonCache;

@interface PFCloudKitStoreComparer : NSObject

@property (readonly, nonatomic) PFCloudKitStoreComparisonCache *cache;
@property (readonly, nonatomic) PFCloudKitArchivingUtilities *archivingUtilities;
@property (nonatomic) BOOL onlyCompareSharedZones;

+ (id)trimExcessiveValuesForLog:(id)a0;

- (void)dealloc;
- (BOOL)compareAttributesOnObject:(id)a0 toObject:(id)a1 error:(id *)a2;
- (BOOL)compareCloudKitMetadataOfStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (BOOL)compareContentOfStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (BOOL)compareDatabaseScopeAndIdentityInStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (BOOL)compareObjectsInStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (BOOL)compareRelationshipsOfRecordID:(id)a0 withStoreObject:(id)a1 andOtherObject:(id)a2 error:(id *)a3;
- (BOOL)ensureContentsMatch:(id *)a0;
- (BOOL)ensureContentsOfStore:(id)a0 matchContentsOfStore:(id)a1 error:(id *)a2;
- (BOOL)ensureMirroredRelationshipsMatchForStore:(id)a0 otherStore:(id)a1 error:(id *)a2;
- (BOOL)ensureMoveReceiptsMatchForStore:(id)a0 otherStore:(id)a1 error:(id *)a2;
- (BOOL)ensureStoresAgreeOnCloudKitTables:(id)a0 error:(id *)a1;
- (id)getObjectMatchingRecordID:(id)a0 fromStore:(id)a1 withManagedObjectContext:(id)a2;
- (id)getRecordIDsForRelationship:(id)a0 onObject:(id)a1;
- (id)initWithStore:(id)a0 otherStore:(id)a1;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1 forAttribute:(id)a2;
- (BOOL)validateValue:(id)a0 againstOtherValue:(id)a1 forIgnoredAttribute:(id)a2;

@end
