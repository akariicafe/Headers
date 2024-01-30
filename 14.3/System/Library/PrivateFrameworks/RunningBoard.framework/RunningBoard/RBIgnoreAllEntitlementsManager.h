@class NSString;

@interface RBIgnoreAllEntitlementsManager : NSObject <RBEntitlementManaging, RBEntitlementPossessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasEntitlementDomain:(unsigned long long)a0;
- (id)entitlementsForProcess:(id)a0;
- (id)allEntitlements;
- (BOOL)hasEntitlement:(id)a0;
- (void)purgeEntitlementsForProcess:(id)a0;

@end
