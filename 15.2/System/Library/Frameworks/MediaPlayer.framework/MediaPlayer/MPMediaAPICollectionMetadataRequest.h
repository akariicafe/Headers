@class ICMusicKitRequestContext, NSUUID, NSProgress, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MPMediaAPICollectionMetadataRequest : NSObject <MPMediaAPIMetadaRequestProtocol> {
    ICMusicKitRequestContext *_requestContext;
    NSString *_storeItemID;
    long long _collectionType;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSProgress *_progress;
    NSString *_requestObjectStoreIdentifier;
    BOOL _isCancelled;
    NSUUID *_requestIdentifier;
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
- (id)initWithStoreID:(id)a0 collectionType:(long long)a1 requestContext:(id)a2;
- (void)_fetchContainerItemMetadataWithBatchProgressHandler:(id /* block */)a0;
- (void)executeRequestWithBatchProgressHandler:(id /* block */)a0;
- (void)_notifyBatchProgressWithResponseDictionary:(id)a0 tokenHalfLifeDuration:(double)a1 error:(id)a2 finalResponse:(BOOL)a3 progressHandler:(id /* block */)a4;
- (void).cxx_destruct;

@end
