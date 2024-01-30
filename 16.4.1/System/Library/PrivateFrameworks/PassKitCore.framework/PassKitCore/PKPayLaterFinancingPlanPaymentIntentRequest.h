@class NSString, NSMutableArray;

@interface PKPayLaterFinancingPlanPaymentIntentRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completions;
@property (readonly, nonatomic) unsigned long long intent;
@property (readonly, copy, nonatomic) NSString *planIdentifier;

- (id)identifier;
- (void).cxx_destruct;
- (void)callCompletionsWithResponse:(id)a0 error:(id)a1;
- (void)coalesceWithRequest:(id)a0;
- (id)initWithPlanIdentifier:(id)a0 intent:(unsigned long long)a1 completion:(id /* block */)a2;

@end
