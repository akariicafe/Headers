@interface CLBBTimeFreqTransferCallbackAssertion : NSObject {
    struct CLCallbackAssertionInternal { id x0; id /* block */ x1; struct CLConnectionClient *x2; } *fInternal;
}

+ (id)newAssertionForBundleIdentifier:(id)a0 withReason:(id)a1 withCallbackQueue:(id)a2 andBlock:(id /* block */)a3;
+ (id)newAssertionForBundle:(id)a0 withReason:(id)a1 withCallbackQueue:(id)a2 andBlock:(id /* block */)a3;

- (id)initWithRegistrationMessageName:(const char *)a0 messageDictionary:(id)a1 dispatchQueue:(id)a2 codeBlock:(id /* block */)a3;
- (void)invalidate;
- (void)dealloc;

@end
