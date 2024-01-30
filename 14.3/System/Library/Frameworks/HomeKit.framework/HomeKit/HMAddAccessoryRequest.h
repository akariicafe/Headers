@class HMSetupAccessoryDescription, NSUUID, NSString, HMAccessoryCategory, HMHome;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) HMSetupAccessoryDescription *accessoryDescription;
@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) HMAccessoryCategory *accessoryCategory;
@property (readonly, nonatomic) BOOL requiresSetupPayloadURL;
@property (readonly, nonatomic) BOOL requiresOwnershipToken;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)payloadWithOwnershipToken:(id)a0;
- (id)payloadWithURL:(id)a0 ownershipToken:(id)a1;
- (id)initWithIdentifer:(id)a0 accessoryName:(id)a1 accessoryCategory:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
