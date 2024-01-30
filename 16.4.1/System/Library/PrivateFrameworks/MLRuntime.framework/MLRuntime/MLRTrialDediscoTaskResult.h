@class NSString;

@interface MLRTrialDediscoTaskResult : MLRTrialTaskResult

@property (readonly, copy, nonatomic) NSString *namespaceName;
@property (readonly, copy, nonatomic) NSString *recipeFactorName;

+ (id)baseKeyFromFormat:(id)a0 variables:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)record:(id)a0 data:(id)a1 encodingSchema:(id)a2 metadata:(id)a3 errorOut:(id *)a4;
- (id)initWithJSONResult:(id)a0 namespaceName:(id)a1 factorName:(id)a2;
- (BOOL)submitForTask:(id)a0 error:(id *)a1;
- (id)variablesFromTrialClient:(id)a0;

@end
