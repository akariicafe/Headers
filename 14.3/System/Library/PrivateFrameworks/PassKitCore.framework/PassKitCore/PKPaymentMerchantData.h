@class NSString, NSData, PKPaymentMerchantSession;

@interface PKPaymentMerchantData : NSObject {
    PKPaymentMerchantSession *_merchantSession;
}

@property (readonly, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) NSData *applicationData;

- (id)encode;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMerchantIdentifier:(id)a0 applicationData:(id)a1;
- (id)initWithPaymentRequest:(id)a0;

@end
