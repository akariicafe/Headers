@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)_allowedEntitlementsSet;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)entitlementsWithDictionary:(id)a0;

- (id)stringForEntitlement:(id)a0;
- (BOOL)hasPrivateMetadataAccess;
- (BOOL)hasAccessEntitlementWithIdentifer:(id)a0;
- (id)typesForReadAuthorizationOverride;
- (id)typesForWriteAuthorizationOverride;
- (id)applicationIdentifier;
- (id)valueForEntitlement:(id)a0;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (id)init;
- (BOOL)hasEntitlement:(id)a0;
- (id)_typesFromIdentifierArray:(id)a0;
- (id)description;
- (BOOL)hasPrivateAccessEntitlementWithIdentifer:(id)a0;
- (id)typesForReadAuthorizationBypass;
- (void).cxx_destruct;
- (id)_initWithEntitlementValues:(id)a0;

@end
