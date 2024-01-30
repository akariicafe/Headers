@class CNAuditToken, CNUnfairLock, NSObject, NSNumber;
@protocol CNTCC, CNTCCSimulation, OS_tcc_identity;

@interface CNAuthorizationContext : NSObject <CNTCCSimulation>

@property (retain, nonatomic) CNAuditToken *cnAuditToken;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (retain, nonatomic) id<CNTCC, CNTCCSimulation> tccServices;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *shouldAlwaysQueryAuthorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isFirstPartyNotesEntitledCachedValue;
@property (retain, nonatomic) NSNumber *isThirdPartyNotesEntitledCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCWhitelistedCachedValue;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue;
@property (retain, nonatomic) CNUnfairLock *authorizationStatusLock;
@property (retain, nonatomic) CNUnfairLock *notesAccessStatusLock;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isAccess1Granted;
@property (readonly, nonatomic) BOOL isAccess2Granted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (readonly, nonatomic) BOOL isClientTCCWhitelisted;

+ (id)sharedInstance;
+ (BOOL)shouldIgnoreAssumedIdentity:(id)a0;
+ (id)os_log;
+ (id)bundleIdentifierForAssumedIdentity:(id)a0;
+ (BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;

- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (void)simulateStatus:(long long)a0;
- (BOOL)isUnitTesting;
- (BOOL)isGreenTeaDevice;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (BOOL)isFirstPartyNotesEntitled;
- (BOOL)isClientTCCCoupledProcess;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (BOOL)isThirdPartyNotesEntitled;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)stopSimulation;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (BOOL)isClientTCCUncoupledProcess;
- (void).cxx_destruct;
- (BOOL)isNotesAccessGrantedImpl;
- (BOOL)requestAccessWithError:(id *)a0;
- (id)init;
- (BOOL)isClientTCCWhitelistedImpl;
- (void)updateCachedNotesAccessGrantedIfNeeded;
- (BOOL)isFirstPartyNotesEntitledImpl;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (void)updateCachedAuthorizationStatusIfNeeded;
- (id)errorForStatus:(long long)a0;
- (BOOL)isThirdPartyNotesEntitledImpl;
- (id)requestAuthorizationFuture:(long long)a0;

@end
