@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSDictionary *aps;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSString *requestID;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
