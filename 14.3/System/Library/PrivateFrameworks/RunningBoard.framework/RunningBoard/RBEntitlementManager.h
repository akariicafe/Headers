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

- (void).cxx_destruct;
- (id)captureState;
- (id)entitlementsForProcess:(id)a0;
- (id)allEntitlements;
- (id)initWithDomainAttributeEntitlements:(id)a0;
- (void)purgeEntitlementsForProcess:(id)a0;

@end
