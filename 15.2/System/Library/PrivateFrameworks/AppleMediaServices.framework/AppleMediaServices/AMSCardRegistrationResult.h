@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject

@property (readonly, nonatomic) NSData *cardData;
@property (readonly, nonatomic) NSURL *brokerURL;
@property (readonly, nonatomic) NSURL *paymentServicesURL;

- (id)initWithCardRegistrationResponse:(id)a0;
- (void).cxx_destruct;

@end
