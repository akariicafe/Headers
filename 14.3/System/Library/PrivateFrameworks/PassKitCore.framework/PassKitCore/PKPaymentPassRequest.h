@class NSString;

@interface PKPaymentPassRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *passTypeID;
@property (copy, nonatomic) NSString *serialNumber;

- (void).cxx_destruct;
- (id)initWithPassTypeID:(id)a0 serialNumber:(id)a1;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
