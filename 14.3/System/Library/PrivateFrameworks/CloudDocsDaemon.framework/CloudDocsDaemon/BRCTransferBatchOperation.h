@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BRCTransferBatchOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableDictionary *_entriesByRecordID;
    NSMutableDictionary *_entriesBySecondaryRecordID;
    NSMutableDictionary *_entriesByTransferID;
    unsigned long long _itemsCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ didProgressBlock;
@property unsigned long long totalSize;
@property unsigned long long doneSize;
@property (readonly) unsigned long long itemsCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *pendingGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void)_addTransfer:(id)a0;
- (void)addTransfer:(id)a0;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initWithName:(id)a0 syncContext:(id)a1;
- (id)initWithName:(id)a0 syncContext:(id)a1 group:(id)a2;
- (id)subclassableDescriptionWithContext:(id)a0;
- (void)setProgress:(double)a0 forRecordID:(id)a1;
- (void)finishedTransferForRecord:(id)a0 recordID:(id)a1 error:(id)a2;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (void)mainWithTransfers:(id)a0;
- (id)actionPrettyName;
- (void)cancelTransferID:(id)a0;
- (void)addAliasItem:(id)a0 toTransferWithID:(id)a1;
- (double)progressForTransferID:(id)a0;
- (id)fetchOperationForTransfers:(id)a0 traceCode:(int)a1;
- (id)transferredObjectsPrettyName;
- (void)_finishedTransfer:(id)a0 error:(id)a1;
- (void)_cancelTransferID:(id)a0;
- (void)_setProgress:(double)a0 forTransfer:(id)a1;
- (void)sendBatchProgressedCallback;
- (id)_finishedTransferForRecord:(id)a0 recordID:(id)a1 error:(id)a2;

@end
