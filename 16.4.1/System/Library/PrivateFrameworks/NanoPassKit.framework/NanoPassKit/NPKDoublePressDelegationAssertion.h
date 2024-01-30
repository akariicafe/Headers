@protocol NPKDoublePressDelegationAssertionDelegate;

@interface NPKDoublePressDelegationAssertion : NPKTransientAssertion

@property (weak, nonatomic) id<NPKDoublePressDelegationAssertionDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)handleDelegatedDoublePressEvent;
- (void)_resyncState;
- (void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(id)a0;

@end
