@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUGLContextPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}

+ (id)sharedContextPool;

- (id)init;
- (void).cxx_destruct;
- (id)newContext;
- (id)newContextForDevice:(id)a0;
- (void)returnContext:(id)a0;
- (id)_newContext;
- (void)_returnContext:(id)a0;

@end
