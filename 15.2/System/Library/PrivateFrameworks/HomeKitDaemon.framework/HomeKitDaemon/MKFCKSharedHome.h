@class NSUUID, NSString, NSDate;

@interface MKFCKSharedHome : MKFCKModel

@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSUUID *defaultRoomModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ownerAccountHandle;
@property (copy, nonatomic) NSUUID *ownerModelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;

+ (id)fetchRequest;
+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;

- (id)initWithContext:(id)a0 assignStore:(id)a1;
- (id)homeModelID;
- (id)createLocalModelWithContext:(id)a0;

@end
