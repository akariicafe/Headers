@interface ATTrackingManager : NSObject

@property (class, readonly, nonatomic) unsigned long long trackingAuthorizationStatus;

+ (BOOL)_userAllowedToChangeSettings;
+ (BOOL)_restrictionProfileInstalled;
+ (BOOL)_applicationHasDisqualifyingEntitlement;
+ (BOOL)_isCrossAppTrackingAllowed;
+ (unsigned long long)_trackingAuthorizationStatus;
+ (void)_sendRequestTrackingAnalytic:(unsigned long long)a0 prompted:(BOOL)a1 deniedReason:(unsigned long long)a2;
+ (BOOL)applicationStateActive;
+ (BOOL)isApplicationExtension;
+ (void)_sendTrackingStatusAnalytic:(unsigned long long)a0 prompted:(BOOL)a1 deniedReason:(unsigned long long)a2;
+ (void)requestTrackingAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
