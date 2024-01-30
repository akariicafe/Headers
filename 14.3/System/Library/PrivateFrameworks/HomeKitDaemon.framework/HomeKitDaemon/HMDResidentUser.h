@class HMDDevice;

@interface HMDResidentUser : HMDUser

@property unsigned long long configurationState;
@property (readonly) HMDDevice *device;
@property (readonly, getter=isBlocked) BOOL blocked;

+ (BOOL)supportsSecureCoding;

- (id)userID;
- (void)setDevice:(id)a0;
- (id)deviceIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithModelObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)configureWithHome:(id)a0;
- (BOOL)refreshDisplayName;
- (id)initWithDevice:(id)a0 home:(id)a1 pairingIdentity:(id)a2 configurationState:(unsigned long long)a3;
- (BOOL)requiresMakoSupport;
- (id)legacyUser;
- (BOOL)updateWithDevice:(id)a0;
- (void)registerIdentity;
- (id)encodingRemoteDisplayName;

@end
