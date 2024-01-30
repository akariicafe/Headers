@class NSUUID, NSString, NSData, SFAuthorization;

@interface CWFRequestParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) int virtualInterfaceRole;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long queuePriority;
@property (copy, nonatomic) SFAuthorization *authorization;
@property (readonly, copy, nonatomic) NSData *authorizationExternalFormData;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__authData:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualTorequestParameters:(id)a0;
- (id)authorizationExternalFormData;
- (void)encodeWithCoder:(id)a0;

@end
