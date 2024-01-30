@class NSString, RTDeviceMO, NSData, NSUUID, NSDate;

@interface RTCloudManagedObject : NSManagedObject <RTPersistenceImportable>

@property (retain, nonatomic) RTDeviceMO *device;
@property (copy, nonatomic) NSString *ckRecordID;
@property (copy, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityNamesEligibleForDeletionByOtherDevices;
+ (id)notTombstonedPredicate;
+ (id)tombstonedPredicate;

- (void)awakeFromInsert;
- (void)willChangeValueForKey:(id)a0;

@end
