@interface WebPolicyDecisionListenerPrivate : NSObject {
    id target;
    SEL action;
}

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;

@end
