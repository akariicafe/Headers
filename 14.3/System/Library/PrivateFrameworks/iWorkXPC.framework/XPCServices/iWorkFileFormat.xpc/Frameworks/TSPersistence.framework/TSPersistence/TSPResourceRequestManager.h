@class NSString, TSUObserverNotifier;

@interface TSPResourceRequestManager : NSObject <TSUResourceRequestObserver, TSUResourceRequestObservable> {
    TSUObserverNotifier *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)createResourceRequestForTags:(id)a0 resourceContext:(id)a1;
- (void)resourceRequestWillPerformResourceAccess:(id)a0;
- (void)resourceRequestDidPerformResourceAccess:(id)a0 error:(id)a1;
- (id)createResourceRequestForDocumentResourceInfos:(id)a0 resourceContext:(id)a1;
- (long long)resourceAccessTypeForResourceRequest:(id)a0;

@end
