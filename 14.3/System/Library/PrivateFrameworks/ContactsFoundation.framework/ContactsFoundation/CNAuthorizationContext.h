@class NSNumber, CNAuditToken;
@protocol CNTCC, CNTCCSimulation;

@interface CNAuthorizationContext : NSObject <CNTCCSimulation>

@property (retain, nonatomic) CNAuditToken *auditToken;
@property (retain, nonatomic) id<CNTCC, CNTCCSimulation> tccServices;
@property (retain, nonatomic) Class entitlementVerifier;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isAccess1Granted;
@property (readonly, nonatomic) BOOL isAccess2Granted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (readonly, nonatomic) BOOL isClientTCCWhitelisted;

+ (id)sharedInstance;
+ (id)os_log;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)requestAccessWithError:(id *)a0;
- (void)stopSimulation;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (void)checkAndUpdateAuthorizationStatusIfUnknown;
- (id)initWithCNAuditToken:(id)a0 tccServices:(id)a1 entitlementVerifier:(Class)a2;
- (BOOL)checkIsClientNotesEntitled;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (id)checkIfNotesAccessGranted;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (id)checkIsFirstPartyOrSecondPartyOrContactsSPIEntitled;
- (void)simulateStatus:(long long)a0;
- (BOOL)checkIsClientTCCWhitelisted;
- (id)requestAuthorizationFuture:(long long)a0;
- (id)errorForStatus:(long long)a0;

@end
