@interface IDSMPFullDeviceIdentity : IDSMPIdentity

+ (id)deviceIdentityFromDataRepresentation:(id)a0 publicAdminServiceIdentity:(id)a1 error:(id *)a2;
+ (id)deviceIdentityWithFullAdminServiceIdentity:(id)a0 error:(id *)a1;

- (id)dataRepresentationWithError:(id *)a0;
- (BOOL)purgeFromKeychain:(id *)a0;
- (id)publicDeviceIdentityWithError:(id *)a0;

@end
