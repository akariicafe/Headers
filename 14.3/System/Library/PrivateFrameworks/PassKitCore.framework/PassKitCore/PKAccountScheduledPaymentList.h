@class NSArray, NSMutableArray;

@interface PKAccountScheduledPaymentList : NSObject <NSSecureCoding> {
    NSMutableArray *_scheduledPayments;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *scheduledPayments;

- (id)init;
- (void).cxx_destruct;
- (id)jsonArrayRepresentationWithCertificatesResponse:(id)a0;
- (id)scheduledPaymentOfFundingSourceType:(long long)a0;
- (id)initWithScheduledPayment:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addScheduledPayment:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
