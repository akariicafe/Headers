@interface PSBiometricIdentity : NSObject

+ (void)removeIdentity:(id)a0;
+ (id)identities;
+ (long long)maximumIdentityCount;
+ (id)nameForIdentity:(id)a0;
+ (id)nextIdentityName;
+ (void)setName:(id)a0 forIdentity:(id)a1;

@end
