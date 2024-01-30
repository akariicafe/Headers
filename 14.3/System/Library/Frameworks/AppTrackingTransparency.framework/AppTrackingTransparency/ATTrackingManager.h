@interface ATTrackingManager : NSObject

@property (class, readonly, nonatomic) unsigned long long trackingAuthorizationStatus;

+ (BOOL)_userAllowedToChangeSettings;
+ (BOOL)_applicationHasDisqualifyingEntitlement;
+ (BOOL)_isCrossAppTrackingAllowed;
+ (void)requestTrackingAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
