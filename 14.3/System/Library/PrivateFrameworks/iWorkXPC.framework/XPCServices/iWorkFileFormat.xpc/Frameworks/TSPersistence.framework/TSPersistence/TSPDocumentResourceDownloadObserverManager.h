@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TSPDocumentResourceDownloadObserverManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_downloadObserversMap;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)addDownloadObserver:(id)a0 forData:(id)a1 digestString:(id)a2 options:(unsigned long long)a3 isInternalObserver:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)notifyDownloadObserversForDigestString:(id)a0 withStatus:(long long)a1 info:(id)a2 wait:(BOOL)a3;

@end
