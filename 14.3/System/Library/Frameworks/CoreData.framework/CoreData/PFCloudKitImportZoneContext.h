@class NSArray, NSURL, NSSet, NSMutableDictionary, NSDictionary, NSMutableArray, NSCloudKitMirroringDelegateOptions, CKRecordZone;

@interface PFCloudKitImportZoneContext : NSObject {
    NSArray *_updatedRecords;
    NSDictionary *_deletedRecordTypeToRecordID;
    NSMutableDictionary *_recordTypeToRecordIDToObjectID;
    NSMutableDictionary *_recordTypeToUnresolvedRecordIDs;
    NSMutableArray *_metadatasToLink;
}

@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) NSSet *deletedObjectIDs;
@property (readonly, nonatomic) NSArray *modifiedRecords;
@property (readonly, nonatomic) NSArray *deletedRelationships;
@property (readonly, nonatomic) NSArray *deletedMirroredRelationshipRecordIDs;
@property (readonly, nonatomic) NSMutableArray *updatedRelationships;
@property (readonly, nonatomic) NSArray *importOperations;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (readonly, nonatomic) NSURL *fileBackedFuturesDirectory;

- (id)initWithRecordZone:(id)a0 updatedRecords:(id)a1 deletedRecordTypeToRecordIDs:(id)a2 options:(id)a3 fileBackedFuturesDirectory:(id)a4;
- (void)dealloc;
- (void)addObjectID:(id)a0 toCache:(id)a1 andRecordID:(id)a2;
- (id)objectIDForRecordWithID:(id)a0 ofType:(id)a1;
- (void)addUnresolvedRecordID:(id)a0 forRecordType:(id)a1 toCache:(id)a2;
- (void)addObjectID:(id)a0 toCache:(id)a1 forRecordWithType:(id)a2 andUniqueIdentifier:(id)a3;
- (BOOL)initializeCachesWithManagedObjectContext:(id)a0 andObservedStore:(id)a1 error:(id *)a2;
- (void)addMirroredRelationshipToLink:(id)a0;
- (void)registerObject:(id)a0 forInsertedRecord:(id)a1 withMetadata:(id)a2;
- (BOOL)linkInsertedObjectsAndMetadataInContext:(id)a0 error:(id *)a1;
- (BOOL)populateUnresolvedIDsInStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;

@end
