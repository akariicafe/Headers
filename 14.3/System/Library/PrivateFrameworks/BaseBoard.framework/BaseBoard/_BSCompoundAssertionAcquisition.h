@class NSString, BSCompoundAssertion;

@interface _BSCompoundAssertionAcquisition : NSObject <BSInvalidatable> {
    struct atomic_flag { _Atomic BOOL _Value; } _invalid;
    BSCompoundAssertion *_assertion;
    NSString *_reason;
    id _context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end
