@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (id)_allowedEntitlementsSet;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)entitlementsWithDictionary:(id)a0;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)valueForEntitlement:(id)a0;
- (id)stringForEntitlement:(id)a0;
- (id)typesForReadAuthorizationOverride;
- (BOOL)hasPrivateMetadataAccess;
- (id)description;
- (BOOL)hasEntitlement:(id)a0;
- (id)_initWithEntitlementValues:(id)a0;
- (id)applicationIdentifier;
- (BOOL)hasPrivateAccessEntitlementWithIdentifer:(id)a0;
- (BOOL)hasAccessEntitlementWithIdentifer:(id)a0;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (id)typesForWriteAuthorizationOverride;
- (id)_typesFromIdentifierArray:(id)a0;

@end
