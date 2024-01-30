@class MOEffectiveBool, MOEffectiveArray;

@interface MOEffectiveApplicationSettings : NSObject

@property (readonly) MOEffectiveArray *blockedApplications;
@property (readonly) MOEffectiveBool *denyAppInstallation;
@property (readonly) MOEffectiveBool *denyAppRemoval;
@property (readonly) MOEffectiveArray *unremovableApplications;

+ (id)xpcConnection;
+ (void)askToOverrideUnremovabilityOfApplication:(id)a0 teamIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
