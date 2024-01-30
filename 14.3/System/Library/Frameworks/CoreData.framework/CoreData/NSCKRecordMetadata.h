@class NSString, NSCKRecordZoneMetadata, NSData, NSNumber;

@interface NSCKRecordMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (retain, nonatomic) NSData *ckShare;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (nonatomic) BOOL needsUpload;
@property (nonatomic) BOOL needsLocalDelete;
@property (nonatomic) BOOL needsCloudDelete;
@property (retain, nonatomic) NSNumber *lastExportedTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportChangeTypeNumber;

+ (id)createMapOfMetadataMatchingObjectIDs:(id)a0 inStore:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)metadataForObject:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
+ (BOOL)purgeRecordMetadataWithRecordIDs:(id)a0 inStore:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)countRecordMetadataInStore:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
+ (id)batchUpdateMetadataMatchingEntityIdsAndPKs:(id)a0 withUpdates:(id)a1 inStore:(id)a2 withManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)countRecordMetadataInStore:(id)a0 matchingRecordIDs:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)createMapOfMetadataMatchingRecords:(id)a0 andRecordIDs:(id)a1 inStore:(id)a2 withManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)metadataForObjectIDs:(id)a0 inStore:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)countRecordMetadataInStore:(id)a0 matchingPredicate:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)metadataForRecord:(id)a0 inManagedObjectContext:(id)a1 fromStore:(id)a2 error:(id *)a3;
+ (id)insertMetadataForObject:(id)a0 setRecordName:(BOOL)a1 inZone:(id)a2 recordNamePrefix:(id)a3 error:(id *)a4;
+ (id)metadataForRecordIDs:(id)a0 fromStore:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;

- (id)createRecordFromSystemFields;

@end
