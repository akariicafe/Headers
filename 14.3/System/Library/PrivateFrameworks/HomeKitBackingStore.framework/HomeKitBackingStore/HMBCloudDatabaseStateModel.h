@class NSSet, NSData, HMBCloudID, NSDate, CKDatabase;

@interface HMBCloudDatabaseStateModel : HMBCloudStateModel

@property (retain, nonatomic) NSData *subscriptionsData;
@property (weak, nonatomic) CKDatabase *database;
@property (retain, nonatomic) HMBCloudID *cloudID;
@property (retain, nonatomic) NSDate *lastAdministrativeFetch;
@property (copy, nonatomic) NSSet *subscriptions;

+ (id)hmbProperties;

- (void).cxx_destruct;
- (id)initWithModelID:(id)a0 parentModelID:(id)a1;

@end
