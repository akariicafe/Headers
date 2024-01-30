@class NSArray, NSString;

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *paymentSummaryItems;
@property (readonly, nonatomic) NSArray *shippingMethods;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *selectedAID;

+ (id)paymentUpdateResponseWithProtobuf:(id)a0;

- (id)protobuf;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentSummaryItems:(id)a0 shippingMethods:(id)a1 status:(long long)a2 selectedAID:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
