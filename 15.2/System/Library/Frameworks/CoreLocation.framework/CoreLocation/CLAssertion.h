@interface CLAssertion : NSObject {
    struct CLAssertionInternal { id x0; struct CLConnectionClient *x1; } *_internal;
}

- (id)initWithRegistrationMessageName:(const char *)a0 messageDictionary:(id)a1;
- (void)invalidate;
- (void)dealloc;

@end
