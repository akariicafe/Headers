@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSError *error;

+ (id)paramWithError:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
