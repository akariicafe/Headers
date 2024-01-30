@class NSString, HKTaskServerProxyProvider, HKObserverSet;

@interface HKClinicalDocumentStore : NSObject <HKMedicalDownloadableAttachmentStoreClientInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet *_stateChangeListeners;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void)pingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_establishProxyConnection;
- (void)_establishProxyConnectionIfNoObserversArePresent;
- (void)triggerAttachmentRetryForMedicalRecordWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_unitTesting_triggerDownloadableAttachmentDidChange:(id)a0 completion:(id /* block */)a1;
- (void)_fetchServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_getSynchronousServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)addClinicalDocumentStateChangeListener:(id)a0;
- (void)clientRemote_downloadableAttachmentDidChangeState:(id)a0;
- (void)fetchAttachmentWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)insertDownloadableAttachment:(id)a0 completion:(id /* block */)a1;
- (void)markDataAvailableForAttachmentWithIdentifier:(id)a0 attachmentContent:(id)a1 completion:(id /* block */)a2;
- (void)markDownloadCompleteForAttachmentWithIdentifier:(id)a0 fileURL:(id)a1 completion:(id /* block */)a2;
- (void)processAttachmentWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeAllAttachmentsFromMedicalRecord:(id)a0 completion:(id /* block */)a1;
- (void)removeClinicalDocumentStateChangeListener:(id)a0;
- (void)updateErrorStatusForAttachmentWithIdentifier:(id)a0 errorStatus:(long long)a1 lastError:(id)a2 completion:(id /* block */)a3;
- (void)updateRetryCountForAttachmentWithIdentifier:(id)a0 retryCount:(long long)a1 nextRetryDate:(id)a2 completion:(id /* block */)a3;
- (void)updateStatusAndClearErrorForAttachmentWithIdentifier:(id)a0 status:(long long)a1 completion:(id /* block */)a2;

@end
