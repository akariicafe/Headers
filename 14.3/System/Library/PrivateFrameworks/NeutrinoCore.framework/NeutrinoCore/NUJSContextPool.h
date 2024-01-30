@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUJSContextPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}

@property (class, readonly) NUJSContextPool *sharedContextPool;

- (id)init;
- (void).cxx_destruct;
- (id)newContext;
- (void)returnContext:(id)a0;
- (id)_newContext;
- (void)_returnContext:(id)a0;

@end
