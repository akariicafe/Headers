@class ICUserVerificationRequest;

@interface ICUserVerificationOperation : ICAsyncOperation

@property (readonly, copy, nonatomic) ICUserVerificationRequest *verificationRequest;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (id)operationWithVerificationRequest:(id)a0;

- (void).cxx_destruct;
- (void)execute;

@end
