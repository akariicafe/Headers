@class HMMatterHome;

@interface HMCHIPEcosystemFetchRoomsRequest : HMCHIPEcosystemRequest

@property (readonly, copy, nonatomic) HMMatterHome *home;

+ (BOOL)supportsSecureCoding;

- (id)messageType;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
