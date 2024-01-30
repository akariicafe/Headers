@class PKPeerPaymentTransactionMetadata, NSArray;

@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *errors;

+ (id)sanitizedErrors:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 errors:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
