@class NSArray;

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contentItems;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *paymentSummaryItems;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 paymentSummaryItems:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentSummaryItems:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
