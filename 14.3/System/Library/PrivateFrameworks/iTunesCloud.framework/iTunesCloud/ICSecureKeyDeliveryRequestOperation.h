@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation

@property (copy, nonatomic) ICSecureKeyDeliveryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;

@end
