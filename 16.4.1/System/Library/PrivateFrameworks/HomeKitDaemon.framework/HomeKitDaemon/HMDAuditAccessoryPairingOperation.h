@class NSString;

@interface HMDAuditAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)predicate;

- (id)logIdentifier;
- (void)auditHAPPairings:(id)a0 forAccessory:(id)a1;
- (id)getPairingsFromAccessory:(id)a0;
- (id)getPairingsFromAirPlayAccessory:(id)a0;
- (id)initWithAccessoryUUID:(id)a0 accessoryIdentifier:(id)a1 homeUUIDWhereAccessoryWasPaired:(id)a2;
- (BOOL)mainWithError:(id *)a0;
- (void)scheduleAuditOperations:(id)a0;

@end
