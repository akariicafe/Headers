@class NSString, NSData, PKPaymentMerchantSession;

@interface PKPaymentMerchantData : NSObject {
    PKPaymentMerchantSession *_merchantSession;
}

@property (readonly, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) NSData *applicationData;

- (id)init;
- (void).cxx_destruct;
- (id)encode;
- (id)initWithMerchantIdentifier:(id)a0 applicationData:(id)a1 merchantSession:(id)a2;

@end
