@class NSDictionary, INIntentResponse, INIntent;

@interface INIntentTestResult : NSObject

@property (readonly, nonatomic) INIntent *resolvedIntent;
@property (readonly, copy, nonatomic) NSDictionary *resolvedParameters;
@property (readonly, nonatomic) BOOL resolvedAllParametersSuccesfully;
@property (readonly, nonatomic) INIntentResponse *confirmResponse;
@property (readonly, nonatomic) INIntentResponse *handleResponse;

- (id)initWithResolvedIntent:(id)a0 resolvedParameters:(id)a1 resolvedAllParametersSuccesfully:(BOOL)a2 confirmResponse:(id)a3 handleResponse:(id)a4;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
