@class NSUUID, BRRTCMigrationMetric;

@interface BRRTCMigrationReportManager : NSObject

@property (retain, nonatomic) BRRTCMigrationMetric *migrationMetric;
@property (readonly, nonatomic) NSUUID *pairingID;
@property (nonatomic) BOOL migrationBegan;
@property (nonatomic) BOOL metricSubmitted;

- (void)setSessionID:(id)a0;
- (void).cxx_destruct;
- (id)_likelyOffendingTransaction;
- (id)_transactionNameFromKey:(id)a0;
- (void)addDeviceDetails:(id)a0;
- (void)addTransactionPhase:(id)a0 withSuccess:(BOOL)a1 withPairingID:(id)a2;
- (id)initWithPairingID:(id)a0;
- (id)retrieveMigrationMetric;
- (void)setErrorCode:(id)a0 domain:(id)a1 description:(id)a2;
- (void)setIsAutomation:(BOOL)a0;
- (void)setMigrationDeviceUnpairedBecauseKeychainIsOff:(BOOL)a0;
- (void)setMigrationDeviceUnpairedBecauseStale:(BOOL)a0;
- (void)setMigrationFailedBTKeysNotSynced:(BOOL)a0;
- (void)setMigrationSucceeded:(BOOL)a0;
- (void)submitMetic;

@end
