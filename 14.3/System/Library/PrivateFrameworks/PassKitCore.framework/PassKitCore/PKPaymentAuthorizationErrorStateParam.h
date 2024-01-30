@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSError *error;

+ (id)paramWithError:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
