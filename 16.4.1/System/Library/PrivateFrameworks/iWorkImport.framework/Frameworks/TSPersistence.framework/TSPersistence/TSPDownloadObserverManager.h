@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface TSPDownloadObserverManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_downloadObserversMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)addDownloadObserver:(id)a0 forData:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)notifyDownloadObserversForData:(id)a0 withStatus:(long long)a1 info:(id)a2 wait:(BOOL)a3;

@end
