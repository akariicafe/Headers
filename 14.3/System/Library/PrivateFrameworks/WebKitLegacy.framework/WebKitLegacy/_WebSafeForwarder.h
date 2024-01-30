@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject {
    id _target;
    id _defaultTarget;
}

@property (readonly, nonatomic) _WebSafeAsyncForwarder *asyncForwarder;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)clearTarget;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithTarget:(id)a0 defaultTarget:(id)a1;

@end
