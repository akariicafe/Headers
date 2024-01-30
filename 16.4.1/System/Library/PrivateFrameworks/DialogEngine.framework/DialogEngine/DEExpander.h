@class NSDictionary;

@interface DEExpander : NSObject

@property (retain, nonatomic) NSDictionary *parameters;
@property BOOL shouldEvaluateConditions;
@property BOOL shouldExpandOpts;

- (id)init;
- (void).cxx_destruct;
- (id)expand:(id)a0 localeString:(id)a1 expansionType:(int)a2;
- (id)expandWithParamsString:(id)a0 localeString:(id)a1;
- (id)expandWithParamsString:(id)a0 localeString:(id)a1 evaluateConditions:(BOOL)a2;
- (id)expandWithParamsStringAsDAG:(id)a0 localeString:(id)a1;

@end
