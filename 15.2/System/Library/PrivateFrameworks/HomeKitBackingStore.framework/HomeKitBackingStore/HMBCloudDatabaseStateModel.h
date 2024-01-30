@class NSSet, NAFuture, NSData, HMBCloudID, NSDate, CKDatabase;

@interface HMBCloudDatabaseStateModel : HMBCloudStateModel

@property (retain, nonatomic) NSData *subscriptionsData;
@property (retain, nonatomic) HMBCloudID *cloudID;
@property (retain, nonatomic) NSDate *lastAdministrativeFetch;
@property (copy, nonatomic) NSSet *subscriptions;
@property (weak, nonatomic) CKDatabase *database;
@property (retain) NAFuture *queuedCloudPullFuture;

+ (id)hmbProperties;

- (void).cxx_destruct;
- (id)initWithModelID:(id)a0 parentModelID:(id)a1;

@end
