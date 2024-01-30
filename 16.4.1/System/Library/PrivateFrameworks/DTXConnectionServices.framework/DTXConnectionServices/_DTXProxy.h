@class DTXProxyChannel;

@interface _DTXProxy : NSObject {
    DTXProxyChannel *_proxyChannel;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithChannel:(id)a0;

@end
