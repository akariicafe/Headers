@class NSSet, NSString, NSURL, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface SYStatisticStore : NSObject <NSFilePresenter> {
    NSString *_path;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_insertIncoming;
    struct sqlite3_stmt { } *_addProcessingTimeIncoming;
    struct sqlite3_stmt { } *_addErrorIncoming;
    struct sqlite3_stmt { } *_markCompleteIncoming;
    struct sqlite3_stmt { } *_insertOutgoing;
    struct sqlite3_stmt { } *_updateOutgoingIdentifier;
    struct sqlite3_stmt { } *_updateOutgoing;
    struct sqlite3_stmt { } *_timestampForID;
    struct sqlite3_stmt { } *_reserveRowID;
    struct sqlite3_stmt { } *_responseReceived;
    struct sqlite3_stmt { } *_requestAcked;
    struct sqlite3_stmt { } *_logFileActivity;
    struct sqlite3_stmt { } *_updateFileOutgoing;
    long long _lastIncomingRowID;
    NSObject<OS_dispatch_queue> *_preemption_queue;
    NSObject<OS_dispatch_queue> *_operations_queue;
    NSOperationQueue *_presenterOperationQueue;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)unpackMessageData:(id)a0;

- (id)initWithPath:(id)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (struct sqlite3 { } *)dbRef;
- (void)dealloc;
- (void)_onQueueAsync:(id /* block */)a0;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)_openDB;
- (void)_onQueueSync:(id /* block */)a0;
- (int)_closeDB;
- (int)_getSchemaVersion;
- (void)recordIncomingMessage:(id)a0 forService:(id)a1;
- (void)recordOutgoingMessage:(id)a0 forService:(id)a1;
- (void)updateOutgoingMessageWithIdentifier:(id)a0 forService:(id)a1 sentSuccessfully:(BOOL)a2 sendError:(id)a3;
- (void)updateOutgoingMessageWithIdentifier:(id)a0 didReceiveResponse:(BOOL)a1 error:(id)a2;
- (void)updateLastIncomingMessageWithError:(id)a0;
- (void)updateLastIncomingMessageWithProcessingTime:(double)a0;
- (void)assignIdentifier:(id)a0 toOutgoingMessage:(id)a1;
- (void)confirmDeliveryOfOutgoingMessage:(id)a0;
- (void)recordOutgoingFileTransferAtURL:(id)a0 metadata:(id)a1 identifier:(id)a2 error:(id)a3 forService:(id)a4;
- (void)setFileTransferIdentifier:(id)a0 forOutgoingMessagesWithRowIDs:(id)a1;
- (unsigned long long)rowIDForPartialMessage:(id)a0;
- (void)recordIncomingFileTransferAtURL:(id)a0 metadata:(id)a1 identifier:(id)a2 forService:(id)a3;
- (void)updateOutgoingFileTransferWithIdentifier:(id)a0 sentSuccessfully:(BOOL)a1 error:(id)a2;
- (void)_initializeFilePresentation;
- (void)_letGoForUnitTests:(id)a0;
- (void)_ensureCorrectFileOwnership:(id)a0;
- (BOOL)_openDBFile:(BOOL)a0;
- (id)_unpackMetadata:(id)a0;
- (id)_keySetForMessageLogTable;
- (void)_unpackPBRequest:(id)a0 forMessageID:(unsigned short)a1 intoDictionary:(id)a2;
- (void)_unpackPBResponse:(id)a0 forMessageID:(unsigned short)a1 intoDictionary:(id)a2;
- (id)_unpackMessageData:(id)a0;
- (double)_getMachTimestamp;
- (BOOL)_tableEmpty:(id)a0;
- (id)_openDBIfNecessary;
- (void)markLastIncomingMessageComplete;
- (void)confirmDeliveryOfOutgoingFileTransfer:(id)a0;
- (id)operationQ;
- (id)_LOCKED_allServiceNames;
- (BOOL)_LOCKED_pruneMessageLogForServices:(id)a0;
- (BOOL)_LOCKED_pruneFileTransferLogForServices:(id)a0;
- (void)_pruneOldData;

@end
