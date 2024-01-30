@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSDictionary *aps;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSString *requestID;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
