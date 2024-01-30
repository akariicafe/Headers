@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface TSPDownloadObserverManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_downloadObserversMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)notifyDownloadObserversForData:(id)a0 withStatus:(long long)a1 info:(id)a2 wait:(BOOL)a3;
- (void)addDownloadObserver:(id)a0 forData:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
