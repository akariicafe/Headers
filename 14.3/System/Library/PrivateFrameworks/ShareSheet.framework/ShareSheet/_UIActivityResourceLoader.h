@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _UIActivityResourceLoader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _loadBlock;
    NSObject<OS_dispatch_group> *_group;
    id _resource;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 loadBlock:(id /* block */)a1;
- (void)_loadResourceWithBlock:(id /* block */)a0;
- (void)loadResourceIfNeeded;
- (void)_getResourceWithBlock:(id /* block */)a0;
- (void)getResourceWithBlock:(id /* block */)a0;

@end
