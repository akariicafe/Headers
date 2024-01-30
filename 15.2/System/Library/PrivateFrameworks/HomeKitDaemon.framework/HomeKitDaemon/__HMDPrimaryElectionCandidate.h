@class NSUUID, NSString, HMDHomeKitVersion, HMDResidentDevice;

@interface __HMDPrimaryElectionCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMDResidentDevice *residentDevice;
@property (readonly, copy, nonatomic) HMDHomeKitVersion *homeKitVersion;
@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSUUID *currentPrimaryIdentifier;
@property (readonly, nonatomic) BOOL enabledAsResident;

+ (id)fromMessagePayload:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)toMessagePayload;
- (id)initWithVersion:(id)a0 deviceIdentifier:(id)a1 name:(id)a2 currentPrimaryIdentifier:(id)a3 enabledAsResident:(BOOL)a4;

@end
