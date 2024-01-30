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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)payloadWithOwnershipToken:(id)a0;
- (id)payloadWithURL:(id)a0 ownershipToken:(id)a1;
- (id)initWithIdentifer:(id)a0 accessoryName:(id)a1 accessoryCategory:(id)a2;

@end
