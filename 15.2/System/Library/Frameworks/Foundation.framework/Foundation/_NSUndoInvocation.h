@class NSInvocation;

@interface _NSUndoInvocation : _NSUndoObject {
    NSInvocation *_invocation;
}

- (void)invoke;
- (id)description;
- (id)initWithTarget:(id)a0 invocation:(id)a1;
- (void)dealloc;

@end
