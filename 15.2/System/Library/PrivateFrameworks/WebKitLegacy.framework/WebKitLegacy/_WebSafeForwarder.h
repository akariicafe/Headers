@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject {
    id _target;
    id _defaultTarget;
}

@property (readonly, nonatomic) _WebSafeAsyncForwarder *asyncForwarder;

- (void)clearTarget;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithTarget:(id)a0 defaultTarget:(id)a1;

@end
