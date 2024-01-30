@interface _NSUndoBlockInvocation : _NSUndoObject {
    id /* block */ _handler;
}

- (void)invoke;
- (id)initWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)dealloc;

@end
