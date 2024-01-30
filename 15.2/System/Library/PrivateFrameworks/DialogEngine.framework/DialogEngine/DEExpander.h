@class NSDictionary;

@interface DEExpander : NSObject

@property (retain, nonatomic) NSDictionary *parameters;
@property BOOL shouldEvaluateConditions;
@property BOOL shouldExpandOpts;

- (void).cxx_destruct;
- (id)init;
- (id)expandWithParamsString:(id)a0 localeString:(id)a1;
- (id)expandWithParamsString:(id)a0 localeString:(id)a1 evaluateConditions:(BOOL)a2;

@end
