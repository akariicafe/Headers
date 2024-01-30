@interface CDPDLockAssertion : NSObject {
    struct __MKBAssertion { } *_assertionRef;
}

+ (id)lock;
+ (id)lockWithError:(id *)a0;

- (void)unlock;

@end
