@class CKRecordZone, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitSchemaGenerator : NSObject

@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions;

+ (id)representativeValueFor:(id)a0;
+ (id)newRepresentativeRecordForStaticFieldsInEntity:(id)a0 inZoneWithID:(id)a1;

- (void)dealloc;
- (id)initWithRecordZone:(id)a0 mirroringOptions:(id)a1;
- (id)newRepresentativeRecordsForStore:(id)a0 error:(id *)a1;
- (id)newManagedObjectContextForCoordinator:(id)a0;
- (id)representativeObjectForEntity:(id)a0 inStore:(id)a1 withManagedObjectContext:(id)a2 cache:(id)a3 populate:(BOOL)a4;
- (void)populateValuesOnObject:(id)a0;
- (void)populateRelationshipsOnObject:(id)a0 inStore:(id)a1 withCache:(id)a2;

@end
