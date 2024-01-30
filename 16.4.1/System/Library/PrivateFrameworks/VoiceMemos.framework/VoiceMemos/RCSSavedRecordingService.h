@class NSMutableDictionary, NSSet, NSXPCConnection, NSPersistentHistoryToken, NSString, NSObject, NSHashTable;
@protocol OS_dispatch_queue, RCSSavedRecordingServiceProtocol;

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    int _compositionAVURLsBeingExportedDistributedNotificationToken;
    int _compositionAVURLsBeingModifiedDistributedNotificationToken;
    id<RCSSavedRecordingServiceProtocol> _serviceProxy;
    id<RCSSavedRecordingServiceProtocol> _synchronousServiceProxy;
    NSHashTable *_interruptionObservers;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    NSMutableDictionary *_pendingSynchronousServiceCompletionHandlers;
}

@property (class, readonly, nonatomic) BOOL isRunningInSavedRecordingDaemon;
@property (class, retain, nonatomic) NSPersistentHistoryToken *changeToken;

@property (retain, nonatomic) NSSet *compositionAVURLsBeingExported;
@property (retain, nonatomic) NSSet *compositionAVURLsBeingModified;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) BOOL isDatabaseAvailable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (id)serviceProxy;
- (oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(id /* block */)a0;
- (oneway void)importRecordingsFromCloud:(id /* block */)a0;
- (void)_sendServiceMessage:(SEL)a0 connectionFailureReplyInfo:(id)a1 infoAndErrorReplyHandler:(id /* block */)a2 withServiceProxy:(id)a3 messagingBlock:(id /* block */)a4;
- (void)openServiceConnection;
- (oneway void)disableCloudRecordingsSaveLocalCopies:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (id)prepareToTrimCompositionAVURL:(id)a0 error:(id *)a1;
- (oneway void)valueForServiceKey:(id)a0 completion:(id /* block */)a1;
- (oneway void)disableOrphanHandlingWithCompletionBlock:(id /* block */)a0;
- (oneway void)expungeRecordingsFromCloud:(id /* block */)a0;
- (void)_sendSynchronousServiceMessage:(SEL)a0 connectionFailureReplyInfo:(id)a1 infoAndErrorReplyHandler:(id /* block */)a2 messagingBlock:(id /* block */)a3;
- (oneway void)importRecordingWithSourceAudioURL:(id)a0 name:(id)a1 date:(id)a2 userInfo:(id)a3 importCompletionBlock:(id /* block */)a4;
- (oneway void)removeAllUserDataWithCompletion:(id /* block */)a0;
- (id)encryptedFieldsStatus;
- (void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)a0 withError:(id)a1;
- (oneway void)_fetchAllAccessTokens:(id /* block */)a0;
- (void)removeInterruptionObserver:(id)a0;
- (id)observeFinalizingRecordings:(id /* block */)a0;
- (oneway void)writeAudioFile:(id)a0 buffer:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)fetchCompositionAVURLsBeingModified:(id /* block */)a0;
- (BOOL)endAccessSessionWithToken:(id)a0 error:(id *)a1;
- (void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(id)a0;
- (id)prepareToPreviewCompositionAVURL:(id)a0 error:(id *)a1;
- (oneway void)prepareToTrimCompositionAVURL:(id)a0 accessRequestHandler:(id /* block */)a1;
- (oneway void)prepareToCaptureToCompositionAVURL:(id)a0 accessRequestHandler:(id /* block */)a1;
- (BOOL)firstImportIsComplete;
- (oneway void)prepareToPreviewCompositionAVURL:(id)a0 accessRequestHandler:(id /* block */)a1;
- (id)openAudioFile:(id)a0 settings:(id)a1 metadata:(id)a2 error:(id *)a3;
- (void)_sendServiceMessage:(SEL)a0 accessRequestReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (void)_sendSynchronousServiceMessage:(SEL)a0 withBasicReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (oneway void)performDatabaseMigrationWithCompletionBlock:(id /* block */)a0;
- (void)_handleCompositionAVURLsBeingExportedDidChange;
- (oneway void)fetchCompositionAVURLsBeingExported:(id /* block */)a0;
- (oneway void)updateSearchMetadataWithRecordingURIsToInsert:(id)a0 recordingURIsToUpdate:(id)a1 recordingURIsToDelete:(id)a2 completionBlock:(id /* block */)a3;
- (oneway void)closeAudioFile:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (oneway void)enableCloudRecordingsWithCompletionBlock:(id /* block */)a0;
- (oneway void)openAudioFile:(id)a0 settings:(id)a1 metadata:(id)a2 accessRequestHandler:(id /* block */)a3;
- (void)_sendServiceMessage:(SEL)a0 connectionFailureReplyInfo:(id)a1 infoAndErrorReplyHandler:(id /* block */)a2 messagingBlock:(id /* block */)a3;
- (BOOL)disableOrphanedFragmentCleanupForCompositionAVURL:(id)a0 error:(id *)a1;
- (id)prepareToExportCompositionAVURL:(id)a0 cacheWaveform:(BOOL)a1 error:(id *)a2;
- (void)_onQueueCloseServiceConnection;
- (void)_sendServiceMessage:(SEL)a0 importRequestReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (void)_sendSynchronousServiceMessage:(SEL)a0 accessRequestReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (BOOL)closeAudioFile:(id)a0 error:(id *)a1;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)a0;
- (void)closeServiceConnection;
- (oneway void)enableOrphanHandlingWithCompletionBlock:(id /* block */)a0;
- (void)_sendServiceMessage:(SEL)a0 withBasicReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (id)synchronousServiceProxy;
- (id)init;
- (id)valueForServiceKey:(id)a0;
- (void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)a0;
- (void)addInterruptionObserver:(id)a0;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)a0 completionBlock:(id /* block */)a1;
- (oneway void)__fetchAllAccessTokens:(id /* block */)a0;
- (oneway void)endAccessSessionWithToken:(id)a0 completionBlock:(id /* block */)a1;
- (oneway void)prepareToExportCompositionAVURL:(id)a0 cacheWaveform:(BOOL)a1 accessRequestHandler:(id /* block */)a2;
- (oneway void)reloadExistingSearchMetadataWithCompletionBlock:(id /* block */)a0;
- (void)_sendServiceMessage:(SEL)a0 withBasicReplyBlock:(id /* block */)a1 withServiceProxy:(id)a2 messagingBlock:(id /* block */)a3;
- (id)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(id /* block */)a0;
- (id)prepareToCaptureToCompositionAVURL:(id)a0 error:(id *)a1;
- (id)encryptedAccountStatus;
- (oneway void)exportRecordingsToCloud:(id /* block */)a0;
- (void)_handleCompositionAVURLsBeingModifiedDidChange;
- (void).cxx_destruct;
- (void)_invalidatePendingSynchronousCompletionHandlersWithError:(id)a0;
- (void)checkRecordingAvailability:(id /* block */)a0;

@end
