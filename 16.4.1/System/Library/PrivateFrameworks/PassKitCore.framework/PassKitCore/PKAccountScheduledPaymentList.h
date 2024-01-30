@class NSArray, NSMutableArray;

@interface PKAccountScheduledPaymentList : NSObject <NSSecureCoding> {
    NSMutableArray *_scheduledPayments;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *scheduledPayments;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addScheduledPayment:(id)a0;
- (id)initWithScheduledPayment:(id)a0;
- (id)jsonArrayRepresentationWithCertificatesResponse:(id)a0;
- (id)scheduledPaymentOfFundingSourceType:(long long)a0;

@end
