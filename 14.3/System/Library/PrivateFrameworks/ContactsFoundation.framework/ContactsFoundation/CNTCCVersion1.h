@class NSNumber;

@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>

@property (retain, nonatomic) NSNumber *simulateStatus;
@property (retain, nonatomic) NSNumber *isUnitTestingOnSimulatorCachedValue;

+ (id)createAppAuthorizationRecordFromTCCAppInfo:(id)a0 bundleIdentifier:(id)a1;

- (void)saveAuthorizationRecord:(id)a0;
- (id)checkIfUnitTesting;
- (void).cxx_destruct;
- (id)authorizationRecordForBundleIdentifier:(id)a0;
- (void)stopSimulation;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)isUnitTesting;
- (id)authorizationRecords;
- (BOOL)isAuthorizationRestricted;
- (void)simulateStatus:(long long)a0;
- (long long)checkAuthorizationStatusOfAuditToken:(struct { unsigned int x0[8]; })a0;
- (long long)checkAuthorizationStatusOfCurrentProcess;

@end
