@class NSString, NSMapTable, NSSet, NSDictionary;

@interface RBEntitlementManager : NSObject <RBEntitlementManaging, RBStateCapturing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_entitlementsByIdentifier;
    NSSet *_availableEntitlements;
    NSDictionary *_restrictedEntitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (id)captureState;
- (id)allEntitlements;
- (void)purgeEntitlementsForProcess:(id)a0;
- (id)entitlementsForProcess:(id)a0;
- (id)initWithDomainAttributeEntitlements:(id)a0;
- (void).cxx_destruct;

@end
