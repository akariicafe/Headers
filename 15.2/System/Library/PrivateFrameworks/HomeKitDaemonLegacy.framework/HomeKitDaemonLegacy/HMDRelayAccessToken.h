@class HMDUser, NSUUID, NSData, NSString, HMDHAPAccessory, HMDRelayAccessTokenModel;

@interface HMDRelayAccessToken : HMFObject <HMFDumpState, HMDBackingStoreObjectProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMDHAPAccessory *accessory;
@property (weak, nonatomic) HMDUser *user;
@property (readonly, nonatomic) NSUUID *accessoryIdentifier;
@property (retain, nonatomic) NSUUID *userIdentifier;
@property (readonly, copy) HMDRelayAccessTokenModel *model;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSData *accessToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dumpState;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)configureWithHome:(id)a0;
- (void)migrateCloudZone:(id)a0 migrationQueue:(id)a1 completion:(id /* block */)a2;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (id)initWithAccessToken:(id)a0 consentToken:(id)a1;
- (id)initWithUser:(id)a0 model:(id)a1;
- (void)fixupUserIdentifier;
- (id)deleteTokenInAccessoryModel;

@end
