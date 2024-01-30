@class NSString, NSCKRecordZoneMetadata, NSData, NSNumber;

@interface NSCKMirroredRelationship : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSString *cdEntityName;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *relatedEntityName;
@property (retain, nonatomic) NSString *relatedRecordName;
@property (retain, nonatomic) NSString *relationshipName;
@property (retain, nonatomic) NSNumber *isPending;
@property (retain, nonatomic) NSNumber *needsDelete;
@property (retain, nonatomic) NSNumber *isUploaded;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;

+ (id)fetchMirroredRelationshipsMatchingRelatingRecords:(id)a0 andRelatingRecordIDs:(id)a1 fromStore:(id)a2 inManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)fetchMirroredRelationshipsForObject:(id)a0 withRecordID:(id)a1 relatedToObjectsByRelationship:(id)a2 inManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)orderRelationships:(id)a0;
+ (id)insertMirroredRelationshipForManyToMany:(id)a0 inZoneWithMetadata:(id)a1 inStore:(id)a2 withManagedObjectContext:(id)a3;
+ (id)mirroredRelationshipForManyToMany:(id)a0 inStore:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)fetchPendingMirroredRelationshipsInStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (BOOL)purgeMirroredRelationshipsWithRecordIDs:(id)a0 fromStore:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)markRelationshipsForDeletedRecordIDs:(id)a0 inStore:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)countMirroredRelationshipsInStore:(id)a0 matchingPredicate:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (BOOL)updateMirroredRelationshipsMatchingRecords:(id)a0 forStore:(id)a1 withManagedObjectContext:(id)a2 usingBlock:(id /* block */)a3 error:(id *)a4;
+ (id)mirroredRelationshipForObject:(id)a0 relatedToObject:(id)a1 relatedByRelationship:(id)a2 error:(id *)a3;
+ (id)countMirroredRelationshipsInStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (id)fetchMirroredRelationshipsMatchingPredicate:(id)a0 fromStore:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;

- (BOOL)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 isDelete:(BOOL)a2 error:(id *)a3;

@end
