@class NSString;

@interface _SBUIPresentableGestureRecognizerPriorityAssertion : NSObject <SBUIPresentableGestureRecognizerPriorityAssertion> {
    id /* block */ _invalidationHandler;
}

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 invalidationHandler:(id /* block */)a1;

@end
