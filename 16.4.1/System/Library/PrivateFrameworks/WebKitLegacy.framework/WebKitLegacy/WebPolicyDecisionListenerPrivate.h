@interface WebPolicyDecisionListenerPrivate : NSObject {
    struct RetainPtr<id> { void *m_ptr; } target;
    SEL action;
}

- (id).cxx_construct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;

@end
