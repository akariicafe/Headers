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
- (void)_sendSynchronousServiceMessage:(SEL)a0 connectionFailureReplyInfo:(id)a1 infoAndErrorReplyHandler:(id /* block */)a2 messagingBlock:(id /* block */)a3;
- (void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)a0;
- (void)_handleCompositionAVURLsBeingExportedDidChange;
- (oneway void)endAccessSessionWithToken:(id)a0 completionBlock:(id /* block */)a1;
- (id)init;
- (void)_sendServiceMessage:(SEL)a0 connectionFailureReplyInfo:(id)a1 infoAndErrorReplyHandler:(id /* block */)a2 withServiceProxy:(id)a3 messagingBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (oneway void)expungeRecordingsFromCloud:(id /* block */)a0;
- (oneway void)removeAllUserDataWithCompletion:(id /* block */)a0;
- (void)_sendServiceMessage:(SEL)a0 accessRequestReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (BOOL)disableOrphanedFragmentCleanupForCompositionAVURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)closeAudioFile:(id)a0 error:(id *)a1;
- (oneway void)writeAudioFile:(id)a0 buffer:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)a0;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)openServiceConnection;
- (void)_invalidatePendingSynchronousCompletionHandlersWithError:(id)a0;
- (void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(id)a0;
- (oneway void)prepareToCaptureToCompositionAVURL:(id)a0 accessRequestHandler:(id /* block */)a1;
- (oneway void)enableOrphanHandlingWithCompletionBlock:(id /* block */)a0;
- (oneway void)disableOrphanHandlingWithCompletionBlock:(id /* block */)a0;
- (oneway void)fetchCompositionAVURLsBeingModified:(id /* block */)a0;
- (void)checkRecordingAvailability:(id /* block */)a0;
- (oneway void)updateSearchMetadataWithRecordingURIsToInsert:(id)a0 recordingURIsToUpdate:(id)a1 recordingURIsToDelete:(id)a2 completionBlock:(id /* block */)a3;
- (oneway void)reloadExistingSearchMetadataWithCompletionBlock:(id /* block */)a0;
- (void)removeInterruptionObserver:(id)a0;
- (void)_sendSynchronousServiceMessage:(SEL)a0 accessRequestReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (id)prepareToTrimCompositionAVURL:(id)a0 error:(id *)a1;
- (void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)a0 withError:(id)a1;
- (id)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(id /* block */)a0;
- (oneway void)enableCloudRecordingsWithCompletionBlock:(id /* block */)a0;
- (oneway void)exportRecordingsToCloud:(id /* block */)a0;
- (void)_sendServiceMessage:(SEL)a0 connectionFailureReplyInfo:(id)a1 infoAndErrorReplyHandler:(id /* block */)a2 messagingBlock:(id /* block */)a3;
- (id)prepareToPreviewCompositionAVURL:(id)a0 error:(id *)a1;
- (oneway void)disableCloudRecordingsSaveLocalCopies:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (oneway void)__fetchAllAccessTokens:(id /* block */)a0;
- (id)prepareToExportCompositionAVURL:(id)a0 cacheWaveform:(BOOL)a1 error:(id *)a2;
- (void)_handleCompositionAVURLsBeingModifiedDidChange;
- (void)_sendServiceMessage:(SEL)a0 withBasicReplyBlock:(id /* block */)a1 withServiceProxy:(id)a2 messagingBlock:(id /* block */)a3;
- (oneway void)performDatabaseMigrationWithCompletionBlock:(id /* block */)a0;
- (void)_sendServiceMessage:(SEL)a0 withBasicReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (oneway void)prepareToPreviewCompositionAVURL:(id)a0 accessRequestHandler:(id /* block */)a1;
- (void)addInterruptionObserver:(id)a0;
- (oneway void)closeAudioFile:(id)a0 completionBlock:(id /* block */)a1;
- (oneway void)openAudioFile:(id)a0 settings:(id)a1 metadata:(id)a2 accessRequestHandler:(id /* block */)a3;
- (id)synchronousServiceProxy;
- (id)openAudioFile:(id)a0 settings:(id)a1 metadata:(id)a2 error:(id *)a3;
- (oneway void)fetchCompositionAVURLsBeingExported:(id /* block */)a0;
- (void)_sendSynchronousServiceMessage:(SEL)a0 withBasicReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (BOOL)endAccessSessionWithToken:(id)a0 error:(id *)a1;
- (oneway void)_fetchAllAccessTokens:(id /* block */)a0;
- (void)_onQueueCloseServiceConnection;
- (oneway void)prepareToExportCompositionAVURL:(id)a0 cacheWaveform:(BOOL)a1 accessRequestHandler:(id /* block */)a2;
- (void)_sendServiceMessage:(SEL)a0 importRequestReplyBlock:(id /* block */)a1 messagingBlock:(id /* block */)a2;
- (oneway void)importRecordingsFromCloud:(id /* block */)a0;
- (void)closeServiceConnection;
- (id)prepareToCaptureToCompositionAVURL:(id)a0 error:(id *)a1;
- (oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(id /* block */)a0;
- (oneway void)prepareToTrimCompositionAVURL:(id)a0 accessRequestHandler:(id /* block */)a1;
- (oneway void)importRecordingWithSourceAudioURL:(id)a0 name:(id)a1 date:(id)a2 userInfo:(id)a3 importCompletionBlock:(id /* block */)a4;

@end
