@class NSArray, NSEnumerator, Protocol;

@interface MPMiddlewareChain : NSObject {
    Protocol *_protocol;
    NSArray *_builders;
    NSEnumerator *_middlewareEnumerator;
}

@property (nonatomic) SEL builderSelector;

+ (id)builderProxyForProtocol:(id)a0;

- (id)nextObject;
- (id)initWithMiddleware:(id)a0 protocol:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
