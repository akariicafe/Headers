@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (id)entitlementsWithDictionary:(id)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)_allowedEntitlementsSet;

- (BOOL)hasEntitlement:(id)a0;
- (id)applicationIdentifier;
- (id)valueForEntitlement:(id)a0;
- (id)typesForReadAuthorizationOverride;
- (BOOL)hasPrivateAccessEntitlementWithIdentifer:(id)a0;
- (id)description;
- (id)stringForEntitlement:(id)a0;
- (BOOL)hasPrivateMetadataAccess;
- (void).cxx_destruct;
- (id)init;
- (id)typesForWriteAuthorizationOverride;
- (id)_typesFromIdentifierArray:(id)a0;
- (BOOL)hasAccessEntitlementWithIdentifer:(id)a0;
- (id)_initWithEntitlementValues:(id)a0;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;

@end
