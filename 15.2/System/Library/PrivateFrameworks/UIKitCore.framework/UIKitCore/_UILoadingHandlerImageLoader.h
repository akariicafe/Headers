@class NSObject;
@protocol OS_dispatch_queue;

@interface _UILoadingHandlerImageLoader : _UIImageLoader {
    NSObject<OS_dispatch_queue> *_loadingQueue;
    id /* block */ _loadingHandler;
}

- (id)initWithLoadingQueue:(id)a0 handler:(id /* block */)a1;
- (void)_really_loadImage:(id /* block */)a0;
- (void).cxx_destruct;

@end
