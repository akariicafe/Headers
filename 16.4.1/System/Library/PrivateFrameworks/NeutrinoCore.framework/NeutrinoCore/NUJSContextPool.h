@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUJSContextPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}

@property (class, readonly) NUJSContextPool *sharedContextPool;

- (id)newContext;
- (void)returnContext:(id)a0;
- (void)_returnContext:(id)a0;
- (id)init;
- (id)_newContext;
- (void).cxx_destruct;

@end
