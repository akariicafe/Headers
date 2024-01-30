@class ICMusicKitRequestContext, NSUUID, NSProgress, NSString, MPPropertySet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPMediaAPICollectionItemAuthTokenRenewalRequest : NSObject <MPMediaAPIMetadaRequestProtocol> {
    ICMusicKitRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSProgress *_progress;
    NSMutableArray *_failedItemIdentifiers;
    NSMutableArray *_itemIdentifiersForRequest;
    long long _requestItemCount;
    BOOL _isCancelled;
    NSUUID *_requestIdentifier;
    MPPropertySet *_requestPropertySet;
    NSString *_personID;
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
- (id)_itemIDsFromRequestIdentifiers;
- (void)_notifyBatchProgressWithResponseDictionary:(id)a0 tokenHalfLifeDuration:(double)a1 error:(id)a2 finalResponse:(BOOL)a3 progressHandler:(id /* block */)a4;
- (void)_renewPlaybackAuthorizationTokensForBatch:(id)a0 progressHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
