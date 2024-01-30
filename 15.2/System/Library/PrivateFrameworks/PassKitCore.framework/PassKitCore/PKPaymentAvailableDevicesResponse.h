@class NSDictionary;

@interface PKPaymentAvailableDevicesResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSDictionary *devices;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
