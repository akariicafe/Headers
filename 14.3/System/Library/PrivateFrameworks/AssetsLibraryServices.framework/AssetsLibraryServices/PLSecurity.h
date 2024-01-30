@interface PLSecurity : NSObject

+ (id)connection:(id)a0 valueForEntitlement:(id)a1;
+ (BOOL)secTask:(struct __SecTask { } *)a0 hasEntitlement:(id)a1;
+ (BOOL)connectionIsEntitledForPhotoKit:(id)a0;
+ (BOOL)connection:(id)a0 hasEntitlement:(id)a1;
+ (id)_secTask:(struct __SecTask { } *)a0 grantedEntitlements:(id)a1;
+ (id)connection:(id)a0 grantedEntitlements:(id)a1;
+ (id)connection:(id)a0 valuesForEntitlements:(id)a1;
+ (BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(struct { unsigned int x0[8]; })a0;
+ (BOOL)isEntitledForPhotoKit;
+ (BOOL)containsPhotoKitEntitlement:(id)a0;
+ (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 hasEntitlement:(id)a1;

@end
