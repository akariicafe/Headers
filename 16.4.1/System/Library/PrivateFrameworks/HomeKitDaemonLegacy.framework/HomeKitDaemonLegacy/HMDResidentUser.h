@class HMDDevice, NSString;

@interface HMDResidentUser : HMDUser

@property unsigned long long configurationState;
@property (readonly) HMDDevice *device;
@property (readonly, getter=isBlocked) BOOL blocked;
@property (readonly, copy) NSString *deviceIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)userID;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (void)setDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelObject:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)encodingRemoteDisplayName;
- (id)initWithDevice:(id)a0 home:(id)a1 pairingIdentity:(id)a2 configurationState:(unsigned long long)a3;
- (id)legacyUser;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (BOOL)refreshDisplayName;
- (void)registerIdentity;
- (BOOL)requiresMakoSupport;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (BOOL)updateWithDevice:(id)a0;

@end
