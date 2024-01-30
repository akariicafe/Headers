@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface __NSHostExtraIvars : NSObject {
    NSString *thingToResolve;
    int resolveType;
    NSObject<OS_dispatch_queue> *resolveQueue;
    NSObject<OS_dispatch_queue> *cacheAccessQueue;
    NSObject<OS_dispatch_queue> *callbackQueue;
    BOOL startedResolving;
}

- (void)dealloc;
- (id)init;

@end
