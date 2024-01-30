@class NSEnumerator;

@interface MPMiddlewareChain : NSObject {
    NSEnumerator *_middlewareEnumerator;
}

@property (nonatomic) SEL builderSelector;

+ (void)registerReturnType:(const char *)a0 returnValueBlock:(id)a1;
+ (id)builderProxyForProtocol:(id)a0;
+ (void)_addBuilderProtocol:(id)a0;

- (void).cxx_destruct;
- (id)initWithMiddleware:(id)a0 protocol:(id)a1;
- (id)nextObject;

@end
