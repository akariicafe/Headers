@interface _NSUndoLightInvocation : _NSUndoObject {
    SEL _selector;
    id _arg;
}

- (void)invoke;
- (id)description;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)dealloc;
- (id)_argument;

@end
