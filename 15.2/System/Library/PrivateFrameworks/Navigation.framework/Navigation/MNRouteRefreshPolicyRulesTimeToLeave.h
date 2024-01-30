@class NSString;

@interface MNRouteRefreshPolicyRulesTimeToLeave : NSObject <MNRouteRefreshPolicyRules>

@property (readonly, nonatomic) unsigned long long policy;
@property (readonly, nonatomic) BOOL canWakeClientForUpdates;
@property (readonly, nonatomic) BOOL canWakeDeviceForUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)canMakeNetworkRequestsForDestination:(id)a0 atDate:(id)a1;
- (double)timeIntervalForDestinationRefresh:(id)a0 lastUpdate:(id)a1;
- (double)maxTimeIntervalFromNowForDestinationRefresh:(id)a0 fromDate:(id)a1;
- (double)_timeIntervalToDestination:(id)a0 fromDate:(id)a1;

@end
