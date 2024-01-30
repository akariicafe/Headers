@class NSString;

@interface HMDHomeRemoteNotification : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSString *accessoryUUID;
@property (readonly, nonatomic) NSString *serviceInstanceID;
@property (readonly, nonatomic) NSString *characteristicInstanceID;
@property (readonly, nonatomic) NSString *updateIdentifier;
@property (readonly, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)matchesCharacterisitic:(id)a0;
- (BOOL)matchesAccessoryUUID:(id)a0 serviceInstanceID:(id)a1 characteristicInstanceID:(id)a2;
- (id)initWithAccessoryUUID:(id)a0 serviceInstanceID:(id)a1 characteristicInstanceID:(id)a2 updateIdentifier:(id)a3 value:(id)a4;

@end
