@interface RTLockAssertion : NSObject {
    struct __MKBAssertion { } *_lockAssertion;
}

- (void)dealloc;
- (id)init;

@end
