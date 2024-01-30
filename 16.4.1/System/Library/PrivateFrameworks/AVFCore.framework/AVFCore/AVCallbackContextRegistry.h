@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVCallbackContextRegistry : NSObject {
    NSMutableDictionary *_contextsForTokens;
    unsigned long long _currentToken;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

+ (void)initialize;
+ (id)sharedCallbackContextRegistry;

- (id)callbackContextForToken:(void *)a0;
- (void)dealloc;
- (void *)registerCallbackContextObject:(id)a0;
- (id)init;
- (void)unregisterCallbackContextForToken:(void *)a0;

@end
