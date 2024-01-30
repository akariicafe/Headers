@interface _NSUndoLightInvocation : _NSUndoObject {
    SEL _selector;
    id _arg;
}

- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)invoke;
- (void)dealloc;
- (id)description;
- (id)_argument;

@end
