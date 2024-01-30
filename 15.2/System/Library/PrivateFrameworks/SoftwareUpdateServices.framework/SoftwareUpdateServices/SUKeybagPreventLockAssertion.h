@class NSString;

@interface SUKeybagPreventLockAssertion : NSObject <BSInvalidatable> {
    BOOL _invalidated;
    struct __MKBAssertion { } *_assertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)dealloc;
- (id)initWithKeybagAssertion:(struct __MKBAssertion { } *)a0;

@end
