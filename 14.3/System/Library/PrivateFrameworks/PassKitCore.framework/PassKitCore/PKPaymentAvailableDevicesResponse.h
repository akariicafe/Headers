@class NSDictionary;

@interface PKPaymentAvailableDevicesResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSDictionary *devices;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
