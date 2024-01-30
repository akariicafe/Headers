@class NSString, BSCompoundAssertion, _BSCompoundAssertionAcquisitionReference;

@interface _BSCompoundAssertionAcquisitionRecord : NSObject {
    BSCompoundAssertion *_assertion;
    NSString *_reason;
    _BSCompoundAssertionAcquisitionReference *_reference;
    id _context;
}

- (void).cxx_destruct;

@end
