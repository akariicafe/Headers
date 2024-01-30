@class NSArray, NSError;

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam

@property (nonatomic) long long dataType;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSArray *clientErrors;
@property (retain, nonatomic) NSError *error;

+ (id)paramWithDataType:(long long)a0 status:(long long)a1 error:(id)a2 clientErrors:(id)a3;

- (void).cxx_destruct;
- (id)description;

@end
