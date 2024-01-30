@class NSString;

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *typeDescription;
@property (copy, nonatomic) NSString *organizationName;
@property (nonatomic) BOOL requiresUserInteraction;
@property (copy, nonatomic) NSString *contactPoint;
@property (copy, nonatomic) NSString *sourceAddress;
@property (readonly, copy, nonatomic) NSString *typeDescriptionUnlocalized;

+ (id)verificationChannelWithDictionary:(id)a0 andOrganizationName:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)needsServerRequest;
- (void)encodeWithCoder:(id)a0;

@end
