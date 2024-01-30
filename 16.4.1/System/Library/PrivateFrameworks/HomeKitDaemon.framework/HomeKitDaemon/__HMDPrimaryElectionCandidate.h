@class NSUUID, NSString, HMDHomeKitVersion, HMDResidentDevice;

@interface __HMDPrimaryElectionCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMDResidentDevice *residentDevice;
@property (readonly, copy, nonatomic) HMDHomeKitVersion *homeKitVersion;
@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSUUID *currentPrimaryIdentifier;
@property (readonly, nonatomic) BOOL enabledAsResident;
@property (nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long connectionType;
@property (readonly, nonatomic) BOOL pcsEnabled;

+ (id)fromMessagePayload:(id)a0;
+ (unsigned long long)setSupportsPingRequest:(BOOL)a0 capabilities:(unsigned long long)a1;
+ (BOOL)supportsPingRequest:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 deviceIdentifier:(id)a1 name:(id)a2 currentPrimaryIdentifier:(id)a3 enabledAsResident:(BOOL)a4 supportsPingRequest:(BOOL)a5 connectionType:(unsigned long long)a6 pcsEnabled:(BOOL)a7;
- (long long)compare:(id)a0 currentPrimary:(id)a1 outCriteria:(unsigned long long *)a2;
- (BOOL)supportsPingRequest;
- (id)toMessagePayload;

@end
