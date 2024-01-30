@interface _UIWeakDisplayLinkTarget : NSObject {
    id _target;
    SEL _action;
}

@property (class, readonly) SEL displayLinkAction;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)_displayLinkTick:(id)a0;

@end
