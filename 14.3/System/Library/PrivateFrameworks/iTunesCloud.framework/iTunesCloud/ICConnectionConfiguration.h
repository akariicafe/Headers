@class NSString, ICUserIdentityStore, NSURL, NSNumber, ICUserIdentity;

@interface ICConnectionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *libraryBagKey;
@property (copy, nonatomic) NSString *buildIdentifier;
@property (copy, nonatomic) NSString *purchaseClientIdentifier;
@property (nonatomic) long long requestReason;
@property (copy, nonatomic) NSNumber *familyMemberStoreID;

+ (id)configurationFromSourceConfiguration:(id)a0 userIdentity:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUserIdentity:(id)a0 userIdentityStore:(id)a1;
- (id)initWithUserIdentity:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
