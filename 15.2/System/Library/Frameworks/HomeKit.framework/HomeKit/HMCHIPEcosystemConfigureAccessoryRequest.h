@class HMMatterRoom, NSString;

@interface HMCHIPEcosystemConfigureAccessoryRequest : HMCHIPEcosystemRequest

@property (readonly, copy, nonatomic) HMMatterRoom *accessoryRoom;
@property (readonly, copy, nonatomic) NSString *accessoryName;

+ (BOOL)supportsSecureCoding;

- (id)messageType;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryName:(id)a0 accessoryRoom:(id)a1;
- (id)responseWithSuccess;

@end
