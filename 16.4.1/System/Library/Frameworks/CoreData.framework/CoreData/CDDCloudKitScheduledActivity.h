@class NSString, NSUUID, CDDCloudKitRegisteredClient, NSDate, NSNumber;

@interface CDDCloudKitScheduledActivity : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (retain, nonatomic) NSNumber *activityTypeNum;
@property (retain, nonatomic) NSUUID *activityUUID;
@property (nonatomic) unsigned long long activityType;
@property (retain, nonatomic) NSDate *scheduledAt;
@property (retain, nonatomic) CDDCloudKitRegisteredClient *registeredClient;
@property (retain, nonatomic) NSNumber *isUserRequestedBackupTask;

- (id)xpcActivityCriteria;
- (void)populateFromCriteria:(id)a0;

@end
