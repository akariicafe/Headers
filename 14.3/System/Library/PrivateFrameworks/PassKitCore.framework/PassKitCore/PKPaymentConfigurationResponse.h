@class NSData, NSString, NSDictionary;

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSDictionary *configuration;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
