@class NSString, NSMutableSet, _HKEntitlements, _HKXPCAuditToken;

@interface HDXPCProcess : NSObject {
    NSString *_name;
    NSMutableSet *_droppedEntitlements;
}

@property (readonly, nonatomic) _HKEntitlements *entitlements;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, copy, nonatomic) _HKXPCAuditToken *auditToken;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL isExtension;
@property (readonly, nonatomic) BOOL isWidgetKitExtension;
@property (readonly, copy, nonatomic) NSString *containerAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;

+ (id)processWithConnection:(id)a0 error:(id *)a1;
+ (id)currentProcess;

- (void)dropEntitlement:(id)a0;
- (id)initWithAuditToken:(id)a0 entitlements:(id)a1 isExtension:(BOOL)a2 containerAppBundleIdentifier:(id)a3;
- (void)restoreEntitlement:(id)a0;
- (BOOL)hasRequiredArrayEntitlement:(id)a0 containing:(id)a1 error:(id *)a2;
- (id)_pluginBundleForCurrentProcess;
- (id)unitTest_copyProcessWithEntitlements:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (BOOL)hasArrayEntitlement:(id)a0 containing:(id)a1;
- (BOOL)hasEntitlement:(id)a0;
- (id)description;
- (BOOL)hasRequiredEntitlement:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
