@class NSURLSession, ENTemporaryExposureKeyManager, ENConfigurationStore, NSMutableDictionary, ENExposureDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface ENTestResultManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_sessionsByUUID;
    NSURLSession *_URLSession;
}

@property (readonly, nonatomic) ENConfigurationStore *configurationStore;
@property (readonly, nonatomic) ENExposureDatabase *exposureDatabase;
@property (readonly, nonatomic) ENTemporaryExposureKeyManager *temporaryExposureKeyManager;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConfigurationStore:(id)a0 exposureDatabase:(id)a1 temporaryExposureKeyManager:(id)a2 queue:(id)a3;
- (void)startTestVerficationSessionWithCode:(id)a0 region:(id)a1 completionHandler:(id /* block */)a2;
- (id)metadataForSessionWithUUID:(id)a0 error:(id *)a1;
- (void)finishSessionWithUUID:(id)a0 userDidConsent:(BOOL)a1 metadata:(id)a2 completionHandler:(id /* block */)a3;
- (id)_existingSessionForVerificationCode:(id)a0 region:(id)a1;
- (id)_createSessionWithVerificationCode:(id)a0 region:(id)a1 error:(id *)a2;
- (id)_sessionWithUUID:(id)a0 error:(id *)a1;
- (void)_invalidateSession:(id)a0;
- (id)_getTemporaryExposureKeysForUpload:(BOOL)a0 requireConsentForRegion:(id)a1 error:(id *)a2;
- (BOOL)_getRevisionToken:(id *)a0 forSession:(id)a1 error:(id *)a2;
- (BOOL)_setRevisionToken:(id)a0 forSession:(id)a1 error:(id *)a2;
- (id)_revisionTokenKeyForSession:(id)a0;

@end
