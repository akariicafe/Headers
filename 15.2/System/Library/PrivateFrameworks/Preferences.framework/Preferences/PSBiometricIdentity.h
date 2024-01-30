@interface PSBiometricIdentity : NSObject

+ (id)identities;
+ (id)nameForIdentity:(id)a0;
+ (long long)maximumIdentityCount;
+ (void)setName:(id)a0 forIdentity:(id)a1;
+ (id)nextIdentityName;
+ (void)removeIdentity:(id)a0;

@end
