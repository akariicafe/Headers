@class Protocol;

@interface _MPMiddlewareChainBuilderProxy : NSProxy {
    Protocol *_protocol;
}

+ (id)allocWithProtocol:(id)a0;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (struct objc_method_description { SEL x0; char *x1; })_methodDescriptionFromProtocolHierarchy:(id)a0 selector:(SEL)a1;
- (struct objc_method_description { SEL x0; char *x1; })_methodDescriptionFromProtocol:(id)a0 selector:(SEL)a1;

@end
