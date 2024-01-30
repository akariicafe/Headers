@class MSMediaStreamDaemon, NSString, NSURL, NSArray, MSPublishStreamsProtocol, NSMutableDictionary, MSObjectQueue, NSMutableArray;
@protocol MSPublisherDelegate, MSPublishStorageProtocol;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate> {
    int _state;
    MSObjectQueue *_uploadQueue;
    MSObjectQueue *_derivativesQueue;
    MSObjectQueue *_quarantinedQueue;
    NSArray *_pendingDerivativesQueue;
    NSMutableArray *_requestAuthQueue;
    unsigned long long _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    id<MSPublishStorageProtocol> _storageProtocol;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    int _maxErrorCount;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (retain, nonatomic) NSURL *storageProtocolURL;
@property (nonatomic) long long publishTargetByteCount;
@property (nonatomic) int publishBatchSize;
@property (nonatomic) id<MSPublisherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)forgetPersonID:(id)a0;
+ (id)nextActivityDate;
+ (BOOL)isInRetryState;
+ (void)stopAllActivities;
+ (id)nextActivityDateForPersonID:(id)a0;
+ (void)_setMasterNextActivityDate:(id)a0 forPersonID:(id)a1;
+ (id)publisherForPersonID:(id)a0;
+ (id)existingPublisherForPersonID:(id)a0;
+ (id)_clearInstantiatedPublishersByPersonID;
+ (id)personIDsWithOutstandingActivities;

- (int)_stop;
- (void)publish;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)_abort;
- (void)abort;
- (void)_forget;
- (void)deactivate;
- (void)publishStorageProtocol:(id)a0 didFinishUploadingAsset:(id)a1 error:(id)a2;
- (int)publishStorageProtocol:(id)a0 didRequestFDForAsset:(id)a1;
- (void)publishStorageProtocol:(id)a0 didFinishUsingFD:(int)a1 forAsset:(id)a2;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)a0;
- (void)publishStreamsProtocol:(id)a0 didFinishUploadingMetadataResponse:(id)a1 error:(id)a2;
- (void)publishStreamsProtocol:(id)a0 didReceiveAuthenticationError:(id)a1;
- (void)publishStreamsProtocol:(id)a0 didFinishSendingUploadCompleteError:(id)a1;
- (void)submitAssetCollectionsForPublication:(id)a0 skipAssetCollections:(id)a1;
- (void)reenqueueQuarantinedAssetCollections;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void)_updateMasterManifest;
- (BOOL)enqueueAssetCollections:(id)a0 outError:(id *)a1;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 outError:(id *)a1;
- (void)computeHashForAsset:(id)a0;
- (void)_refreshServerSideConfiguredParameters;
- (void)_serverSideConfigurationDidChange:(id)a0;
- (void)_registerAsset:(id)a0;
- (void)_registerAllAssetsForWrapper:(id)a0;
- (void)_quarantineOrDiscardWrappers:(id)a0 withError:(id)a1;
- (BOOL)_verifyAssetFile:(id)a0;
- (id)_collectionWithNoDerivatives:(id)a0;
- (id)_checkAssetCollectionFiles:(id)a0;
- (id)_checkObjectWrappers:(id)a0;
- (BOOL)_isAllowedToUpload;
- (void)_requestDerivatives;
- (void)_addAssetToFileHashMap:(id)a0;
- (void)_removeAssetFromFileHashMap:(id)a0;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)a0;
- (void)_didFinishUsingAssetCollections:(id)a0;
- (void)_sendMetadataToStreams;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)a0;
- (void)_sendFilesToMMCS;
- (void)_categorizeError:(id)a0 setOutIsIgnorable:(BOOL *)a1 setOutIsCounted:(BOOL *)a2 setOutIsFatal:(BOOL *)a3 setOutNeedsBackoff:(BOOL *)a4 setOutIsTemporary:(BOOL *)a5 setOutIsTokenAuth:(BOOL *)a6 setOutIsAuthError:(BOOL *)a7;
- (void)_sendUploadComplete;
- (id)_abortedError;
- (BOOL)_isInRetryState;

@end
