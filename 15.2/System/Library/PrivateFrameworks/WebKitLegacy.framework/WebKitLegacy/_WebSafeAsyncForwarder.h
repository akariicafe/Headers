@class _WebSafeForwarder;

@interface _WebSafeAsyncForwarder : NSObject {
    _WebSafeForwarder *_forwarder;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithForwarder:(id)a0;

@end
