@class ENTemporaryExposureKeyManager, ENChaffTestResultSession, ENRegion, NSURLSession, NSMutableDictionary, ENConfigurationStore, NSObject, ENXPCTimer, ENExposureDatabase;
@protocol ENTestResultManagerDelegate, OS_dispatch_queue;

@interface ENTestResultManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ENChaffTestResultSession *_chaffSession;
    NSMutableDictionary *_sessionsByUUID;
    NSURLSession *_URLSession;
    NSURLSession *_URLBackupSession;
    ENXPCTimer *_chaffingTimer;
    ENRegion *_chaffingRegion;
    unsigned long long _maxRetryTime;
}

@property (readonly, nonatomic) ENConfigurationStore *configurationStore;
@property (readonly, nonatomic) ENExposureDatabase *exposureDatabase;
@property (readonly, nonatomic) ENTemporaryExposureKeyManager *temporaryExposureKeyManager;
@property (weak, nonatomic) id<ENTestResultManagerDelegate> delegate;

+ (id)generateSecureNonce:(unsigned long long)a0;
+ (BOOL)checkValidNonce:(id)a0 size:(unsigned long long)a1;

- (void)_invalidate;
- (void)startSelfReportWebSession:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConfigurationStore:(id)a0 exposureDatabase:(id)a1 temporaryExposureKeyManager:(id)a2 queue:(id)a3;
- (void)activateAutomatedChaffingWithRegion:(id)a0;
- (void)deactivateAutomatedChaffing;
- (id)metadataForSessionWithUUID:(id)a0 error:(id *)a1;
- (void)finishSessionWithUUID:(id)a0 userDidConsent:(BOOL)a1 metadata:(id)a2 completionHandler:(id /* block */)a3;
- (void)startTestVerficationSessionWithCode:(id)a0 proxyEnabled:(BOOL)a1 region:(id)a2 completionHandler:(id /* block */)a3;
- (void)startChaffTestVerficationSessionForRegion:(id)a0 completionHandler:(id /* block */)a1;
- (void)setMaxRetryTime:(unsigned long long)a0;
- (id)_createURLSessionWithSecondaryIdentifier:(BOOL)a0;
- (void)_activateAutomatedChaffingWithRegion:(id)a0;
- (void)_deactivateAutomatedChaffing;
- (id)_serverConfigurationForRegion:(id)a0 error:(id *)a1;
- (void)_updateChaffingTimerBlock;
- (void)_startChaffTestVerficationSessionForRegion:(id)a0 completionHandler:(id /* block */)a1;
- (id)_configurationForRegion:(id)a0 error:(id *)a1;
- (void)_startTestVerficationSessionWithCode:(id)a0 proxyEnabled:(BOOL)a1 region:(id)a2 completionHandler:(id /* block */)a3;
- (id)_existingSessionForVerificationCode:(id)a0 region:(id)a1;
- (id)_createSessionWithVerificationCode:(id)a0 proxyEnabled:(BOOL)a1 region:(id)a2 maxRetryTime:(unsigned long long)a3 error:(id *)a4;
- (void)_startSelfReportWebSession:(id)a0 completionHandler:(id /* block */)a1;
- (id)_metadataForSessionWithUUID:(id)a0 error:(id *)a1;
- (id)_sessionWithUUID:(id)a0 error:(id *)a1;
- (void)_finishSessionWithUUID:(id)a0 userDidConsent:(BOOL)a1 metadata:(id)a2 completionHandler:(id /* block */)a3;
- (void)_invalidateSession:(id)a0;
- (id)_getTemporaryExposureKeysForUpload:(BOOL)a0 requireConsentForRegion:(id)a1 error:(id *)a2;
- (BOOL)_getRevisionToken:(id *)a0 forSession:(id)a1 error:(id *)a2;
- (BOOL)_setRevisionToken:(id)a0 forSession:(id)a1 error:(id *)a2;
- (id)_revisionTokenKeyForSession:(id)a0;
- (void)activateWebSession:(id)a0 verificationTimestamp:(double)a1 nonceTimestamp:(double)a2;
- (void)deactivateWebSession;

@end
