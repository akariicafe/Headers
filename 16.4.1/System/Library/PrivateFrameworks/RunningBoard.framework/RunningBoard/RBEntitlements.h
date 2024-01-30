@class NSString, NSSet;

@interface RBEntitlements : NSObject <RBEntitlementPossessing> {
    NSSet *_entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)hasEntitlement:(id)a0;
- (id)_initWithEntitlements:(id)a0;
- (BOOL)hasEntitlementDomain:(unsigned long long)a0;
- (void).cxx_destruct;

@end
