@class HMDDevice;

@interface HMDResidentUser : HMDUser

@property unsigned long long configurationState;
@property (readonly) HMDDevice *device;
@property (readonly, getter=isBlocked) BOOL blocked;

+ (BOOL)supportsSecureCoding;

- (id)displayName;
- (id)deviceIdentifier;
- (id)userID;
- (void)encodeWithCoder:(id)a0;
- (void)setDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithModelObject:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)configureWithHome:(id)a0;
- (BOOL)refreshDisplayName;
- (BOOL)requiresMakoSupport;
- (id)initWithDevice:(id)a0 home:(id)a1 pairingIdentity:(id)a2 configurationState:(unsigned long long)a3;
- (id)legacyUser;
- (BOOL)updateWithDevice:(id)a0;
- (id)encodingRemoteDisplayName;
- (void)registerIdentity;

@end
