@class _WebSafeForwarder;

@interface _WebSafeAsyncForwarder : NSObject {
    _WebSafeForwarder *_forwarder;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithForwarder:(id)a0;

@end
