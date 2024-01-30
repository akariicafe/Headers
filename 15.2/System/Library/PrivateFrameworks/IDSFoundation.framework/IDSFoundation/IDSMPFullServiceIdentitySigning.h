@class NSString;

@interface IDSMPFullServiceIdentitySigning : IDSMPIdentity

@property (readonly, nonatomic) long long identityServiceType;
@property (readonly, nonatomic) NSString *identityServiceTypeName;

+ (id)fullServiceIdentityWithFullAccountIdentity:(id)a0 type:(long long)a1 error:(id *)a2;
+ (id)identityWithData:(id)a0 accountIdentity:(id)a1 error:(id *)a2;

- (id)dataRepresentationWithError:(id *)a0;
- (id)publicServiceIdentitySigningWithError:(id *)a0;

@end
