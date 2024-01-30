@class NSString;

@interface MNRouteRefreshPolicyRulesDefault : NSObject <MNRouteRefreshPolicyRules>

@property (readonly, nonatomic) unsigned long long policy;
@property (readonly, nonatomic) BOOL canWakeClientForUpdates;
@property (readonly, nonatomic) BOOL canWakeDeviceForUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
