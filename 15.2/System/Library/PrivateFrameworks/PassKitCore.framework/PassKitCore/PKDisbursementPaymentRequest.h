@class PKDisbursementRequest;

@interface PKDisbursementPaymentRequest : PKPaymentRequest

@property (readonly, nonatomic) PKDisbursementRequest *disbursementRequest;
@property (readonly, nonatomic) unsigned long long disbursementSource;
@property (readonly, nonatomic) unsigned long long disbursementTarget;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDisbursementPaymentRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
