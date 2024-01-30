@class TPSTargetingValidation, NSString;

@interface TPSTargetingValidateOperation : TPSAsyncOperation

@property (nonatomic) long long result;
@property (readonly, nonatomic) TPSTargetingValidation *validator;
@property (copy, nonatomic) NSString *context;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (id)description;
- (id)initWithTargetingCondition:(id)a0;

@end
