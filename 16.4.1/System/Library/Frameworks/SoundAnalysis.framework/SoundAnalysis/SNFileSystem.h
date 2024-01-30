@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SNFileSystem : NSObject {
    NSMutableDictionary *_taskCompletionMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (void)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;

@end
