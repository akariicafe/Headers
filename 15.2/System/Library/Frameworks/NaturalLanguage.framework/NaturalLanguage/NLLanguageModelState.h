@class NSString, NSDictionary, NSMutableString, NLLanguageModelSession;

@interface NLLanguageModelState : NSObject <NSCopying> {
    NSDictionary *_options;
    NSMutableString *_context;
}

@property (readonly, copy, nonatomic) NLLanguageModelSession *session;
@property (readonly, copy, nonatomic) NSString *context;

- (id)description;
- (id)options;
- (void)addContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetContext;
- (id)conditionalProbabilityForString:(id)a0;
- (id)conditionalProbabilitiesForStrings:(id)a0;
- (void)enumeratePredictions:(unsigned long long)a0 maximumTokensPerPrediction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)initWithSession:(id)a0 options:(id)a1 context:(id)a2;
- (id)conditionalProbabilityForToken:(id)a0;
- (id)conditionalProbabilitiesForTokens:(id)a0;

@end
