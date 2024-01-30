@class NSUUID, HDHRSServerAuthorizationInformation, HKClinicalGateway;

@interface HDHRSAccountConnectionInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;
@property (readonly, copy, nonatomic) HKClinicalGateway *gateway;
@property (readonly, copy, nonatomic) HDHRSServerAuthorizationInformation *authorization;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAccountIdentifier:(id)a0 gateway:(id)a1 authorization:(id)a2;

@end
