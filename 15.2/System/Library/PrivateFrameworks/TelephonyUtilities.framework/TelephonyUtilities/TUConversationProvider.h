@class NSString, NSObject;
@protocol OS_tcc_identity;

@interface TUConversationProvider : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) TUConversationProvider *expanseProvider;
@property (class, readonly, nonatomic) TUConversationProvider *faceTimeProvider;
@property (class, readonly, nonatomic) TUConversationProvider *unknownProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)providerForIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 localizedName:(id)a1;
- (id)initWithConversationProvider:(id)a0;
- (BOOL)isEqualToConversationProvider:(id)a0;

@end
