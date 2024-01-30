@class NSString, NSSet, NSProgress, TSPDocumentResourceCache, TSUObserverNotifier, NSObject;
@protocol OS_dispatch_queue, TSUResourceRequest;

@interface TSPDocumentResourceRequest : NSObject <TSUResourceFileURLProvider, TSUResourceRequest, TSUResourceRequestObservable> {
    TSPDocumentResourceCache *_documentResourceCache;
    NSSet *_documentResourceInfos;
    NSSet *_tags;
    TSUObserverNotifier *_observerNotifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSUResourceRequest> _accessQueue_backingResourceRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long estimatedDownloadSize;
@property (readonly) NSSet *tags;
@property (readonly) NSProgress *progress;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fileURLForResourceInfo:(id)a0;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDocumentResourceInfos:(id)a0 documentResourceCache:(id)a1;
- (id)initWithDocumentResourceInfos:(id)a0 tags:(id)a1 documentResourceCache:(id)a2;
- (id)newBackingResourceRequestForDocumentResourceInfos:(id)a0 documentResourceCache:(id)a1;
- (void)performResourceAccessAsynchronouslyUsingQueue:(id)a0 block:(id /* block */)a1;
- (void)performResourceAccessUsingQueue:(id)a0 block:(id /* block */)a1;
- (id)remoteURLForDocumentResourceInfo:(id)a0;
- (id)urlForResourceInfo:(id)a0;

@end
