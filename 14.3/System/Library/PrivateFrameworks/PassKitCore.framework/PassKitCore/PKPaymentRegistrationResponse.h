@class NSString, NSDictionary, NSURL, NSArray, NSNumber;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSNumber *cardsOnFile;
@property (copy, nonatomic) NSNumber *maxCards;
@property (copy, nonatomic) NSDictionary *regions;
@property (copy, nonatomic) NSString *environmentName;
@property (copy, nonatomic) NSURL *brokerURL;
@property (copy, nonatomic) NSURL *trustedServiceManagerURL;
@property (copy, nonatomic) NSURL *paymentServicesURL;
@property (copy, nonatomic) NSArray *certificates;
@property (readonly, copy, nonatomic) NSString *primaryRegion;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
