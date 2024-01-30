@class NSUUID, NSString, NSDate;

@interface MKFCKModel : NSManagedObject <HMDCoreDataCloudTransformable, HMFLogging>

@property (copy, nonatomic) NSUUID *primitiveConflictResolutionUUID;
@property (copy, nonatomic) NSString *primitiveWriterVersion;
@property (readonly, nonatomic) BOOL shouldSkipValidationDuringImport;
@property (readonly, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *writerVersion;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)predicateWithModelIDs:(id)a0;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;
+ (id)createWithLocalModel:(id)a0 context:(id)a1;
+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (id)predicateWithModelID:(id)a0;
+ (id)modelWithModelID:(id)a0 context:(id)a1 error:(id *)a2;

- (void)awakeFromInsert;
- (id)logIdentifier;
- (id)fetchLocalModelWithContext:(id)a0;
- (id)relationshipForLocalName:(id)a0 localModel:(id)a1;
- (id)createLocalModelWithContext:(id)a0;
- (BOOL)copyPropertiesFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)copyPropertiesIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)validateModelID:(id *)a0 error:(id *)a1;
- (BOOL)validateWriterTimestamp:(id *)a0 error:(id *)a1;
- (BOOL)validateWriterVersion:(id *)a0 error:(id *)a1;
- (BOOL)validateConflictResolutionUUID:(id *)a0 error:(id *)a1;

@end
