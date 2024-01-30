@class ICMusicKitRequestContext, NSUUID, NSProgress, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPMediaAPICollectionItemMetadataRequest : NSObject <MPMediaAPIMetadaRequestProtocol> {
    ICMusicKitRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSProgress *_progress;
    NSMutableArray *_failedItemIdentifiers;
    NSMutableArray *_itemIDsForRequest;
    long long _requestItemCount;
    NSString *_personID;
    NSUUID *_requestIdentifier;
    BOOL _isCancelled;
}

@property (readonly, nonatomic) BOOL shouldResolveRequestItemsLocally;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) long long requestItemCount;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelRequest;
- (void)executeRequestWithBatchProgressHandler:(id /* block */)a0;
- (void)_resolveRequestItemsWithSOD:(id)a0;
- (id)initWithItemIdentifiers:(id)a0 personID:(id)a1 requestContext:(id)a2;
- (id)_getNextBatchBatch;
- (void)_notifyBatchProgressWithResponseDictionary:(id)a0 tokenHalfLifeDuration:(double)a1 error:(id)a2 finalResponse:(BOOL)a3 progressHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_fetchContainerItemMetadataForBatch:(id)a0 progressHandler:(id /* block */)a1;

@end
