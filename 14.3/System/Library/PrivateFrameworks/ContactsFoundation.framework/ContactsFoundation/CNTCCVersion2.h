@class NSNumber, NSObject;
@protocol OS_tcc_server, OS_tcc_message_options, OS_tcc_service;

@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>

@property (readonly, nonatomic) NSObject<OS_tcc_message_options> *syncOptions;
@property (readonly, nonatomic) NSObject<OS_tcc_server> *server;
@property (readonly, nonatomic) NSObject<OS_tcc_service> *service;
@property (retain, nonatomic) NSNumber *simulateStatus;
@property (retain, nonatomic) NSNumber *isUnitTestingOnSimulatorCachedValue;

- (void)saveAuthorizationRecord:(id)a0;
- (id)checkIfUnitTesting;
- (id)init;
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
