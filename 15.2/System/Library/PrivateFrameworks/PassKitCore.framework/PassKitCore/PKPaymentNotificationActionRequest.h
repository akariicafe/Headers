@class NSString;

@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *action;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;

@end
