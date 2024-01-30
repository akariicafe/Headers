@class NSSet;

@interface _EXDefaults : NSObject

@property (readonly) BOOL implementsNSExtension;
@property (readonly) BOOL queryPredicatesEvaluatedOutOfProcess;
@property (readonly) BOOL useLSDExtensionKitServiceForDiscovery;
@property (readonly) BOOL useLSDExtensionKitServiceForLaunch;
@property (readonly) BOOL preferInProcessDiscovery;
@property (readonly) BOOL rejectExtensionRequestsWithInsecureInputItems;
@property (readonly) BOOL appleInternal;
@property (readonly) BOOL allowsAppleInternalComponents;
@property (readonly) BOOL supportExtensionKitConfigPath;
@property (readonly) BOOL hostRequiresEntitlements;
@property (readonly) BOOL enforceLegacyExtensionPointAllowList;
@property (readonly) BOOL allowSimulatedJetsam;
@property (readonly) NSSet *errorTypes;
@property (readonly) NSSet *plistTypes;
@property (readonly) NSSet *plistAndValueTypes;

+ (id)sharedInstance;

- (id)_init;
- (BOOL)hostRequiresEntitlements;
- (BOOL)allowSimulatedJetsam;
- (BOOL)allowsAppleInternalComponents;
- (BOOL)supportExtensionKitConfigPath;
- (BOOL)enforceLegacyExtensionPointAllowList;
- (BOOL)implementsNSExtension;

@end
