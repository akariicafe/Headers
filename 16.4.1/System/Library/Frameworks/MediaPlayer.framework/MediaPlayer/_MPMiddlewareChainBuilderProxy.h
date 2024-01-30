@class Protocol;

@interface _MPMiddlewareChainBuilderProxy : NSProxy {
    Protocol *_protocol;
}

+ (id)allocWithProtocol:(id)a0;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
