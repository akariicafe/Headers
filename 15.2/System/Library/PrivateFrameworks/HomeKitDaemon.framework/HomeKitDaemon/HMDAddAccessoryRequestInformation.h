@class HMSetupAccessoryDescription, NSString, HMDAccessory, HMAccessoryCategory, NSUUID, HMFTimer;

@interface HMDAddAccessoryRequestInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) HMAccessoryCategory *accessoryCategory;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, copy, nonatomic) HMSetupAccessoryDescription *accessoryDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) HMFTimer *cleanupTimer;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryName:(id)a0 category:(id)a1 bundleID:(id)a2 accessoryDescription:(id)a3;
- (void)startCleanupTimerForDelegate:(id)a0 delegateQueue:(id)a1;
- (void)storeIdentifierFromUnassociatedAccessory:(id)a0 setupCode:(id)a1;
- (void)cancelCleanupTimer;

@end
