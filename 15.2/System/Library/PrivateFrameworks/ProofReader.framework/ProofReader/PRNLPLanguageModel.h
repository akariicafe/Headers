@class NSString, NSMutableDictionary, NLLanguageModel, NSMutableArray, NLLanguageModelSession;

@interface PRNLPLanguageModel : NSObject {
    NLLanguageModel *_model;
    NLLanguageModelSession *_session;
    NSMutableDictionary *_cachedStates;
    NSMutableArray *_cachedContextsRecycleQueue;
}

@property (readonly, nonatomic) NSString *localization;
@property (readonly) long long granularity;

+ (id)languageModelWithLocalization:(id)a0 granularity:(long long)a1;

- (id)description;
- (void)dealloc;
- (id)stateWithContext:(id)a0;
- (BOOL)getConditionalProbabilityForString:(id)a0 context:(id)a1 probability:(double *)a2;
- (id)initWithLocalization:(id)a0 granularity:(long long)a1;

@end
