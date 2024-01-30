@class NSString;
@protocol CRKOSTransactionPrimitives;

@interface CRKOSTransactionAssertionProvider : NSObject <CATAssertionProviding>

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) id<CRKOSTransactionPrimitives> primitives;

- (id)acquireAssertion;
- (void).cxx_destruct;
- (id)initWithReverseDNSReason:(id)a0 primitives:(id)a1;

@end
