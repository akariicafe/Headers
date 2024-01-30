@protocol NPKDoublePressDelegationAssertionDelegate;

@interface NPKDoublePressDelegationAssertion : NPKTransientAssertion

@property (weak, nonatomic) id<NPKDoublePressDelegationAssertionDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)handleDelegatedDoublePressEvent;
- (void)_resyncState;

@end
