@class NSObject;
@protocol OS_dispatch_queue;

@interface AVVCKeepAliveManager : NSObject {
    struct AVVCKeepAliveImpl { void /* function */ **x0; } *_impl;
    NSObject<OS_dispatch_queue> *mKeepAliveDispatchQueue;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopWithCompletion:(id /* block */)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (void)createWithCompletion:(id /* block */)a0;
- (void)destroyWithCompletion:(id /* block */)a0;
- (id)getDispatchQueue;

@end
