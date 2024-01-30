@class NSString, NSSet;

@interface RBEntitlements : NSObject <RBEntitlementPossessing> {
    NSSet *_entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasEntitlementDomain:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasEntitlement:(id)a0;
- (id)_initWithEntitlements:(id)a0;

@end
