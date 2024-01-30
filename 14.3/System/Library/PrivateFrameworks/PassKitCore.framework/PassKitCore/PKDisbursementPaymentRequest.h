@class PKDisbursementRequest;

@interface PKDisbursementPaymentRequest : PKPaymentRequest

@property (readonly, nonatomic) PKDisbursementRequest *disbursementRequest;
@property (readonly, nonatomic) unsigned long long disbursementSource;
@property (readonly, nonatomic) unsigned long long disbursementTarget;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisbursementPaymentRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
