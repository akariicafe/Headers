@class NDAnalyticsPayloadUploader, NDAnalyticsUploadScheduler, NDAnalyticsPayloadAssembler, NFMutexLock, NSString, FCKeyValueStore, NDAnalyticsEnvelopeStore;

@interface NDAnalyticsEnvelopeManager : NSObject <NDAnalyticsEnvelopeStoreObserver, NDAnalyticsUploadSchedulerDelegate, NDAnalyticsService>

@property (retain, nonatomic) NDAnalyticsEnvelopeStore *envelopeStore;
@property (retain, nonatomic) NDAnalyticsPayloadAssembler *payloadAssembler;
@property (retain, nonatomic) NDAnalyticsPayloadUploader *payloadUploader;
@property (retain, nonatomic) NDAnalyticsUploadScheduler *uploadScheduler;
@property (retain, nonatomic) FCKeyValueStore *lastUploadDatesByContentType;
@property (retain, nonatomic) NFMutexLock *keyValueStoreLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppConfigurationManager:(id)a0 storeDirectoryFileURL:(id)a1 URLSessionQueue:(id)a2;
- (id)init;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_handleDroppedEnvelopesForLocalReasons:(id)a0;
- (void).cxx_destruct;
- (void)uploadScheduler:(id)a0 performUploadWithCompletion:(id /* block */)a1;
- (void)envelopeStore:(id)a0 didFlushEnvelopesForEntries:(id)a1;
- (void)submitEnvelopes:(id)a0 withSubmissionCompletion:(id /* block */)a1 foregroundUploadCompletion:(id /* block */)a2;
- (void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)a0;
- (id)_lastUploadDatesByContentType;
- (void)_scheduleUploadIfNeededWithCompletion:(id /* block */)a0;
- (void)submitEnvelopes:(id)a0 withCompletion:(id /* block */)a1;
- (id)_handleOutcomeOfUploadAttemptWithPayload:(id)a0 success:(BOOL)a1 error:(id)a2 willRetry:(BOOL)a3 hitEndpoint:(BOOL)a4;

@end
