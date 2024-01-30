@class NSObject;
@protocol OS_dispatch_queue;

@interface _UILoadingHandlerImageLoader : _UIImageLoader {
    NSObject<OS_dispatch_queue> *_loadingQueue;
    id /* block */ _loadingHandler;
}

- (void).cxx_destruct;
- (void)_really_loadImage:(id /* block */)a0;
- (id)initWithLoadingQueue:(id)a0 handler:(id /* block */)a1;

@end
