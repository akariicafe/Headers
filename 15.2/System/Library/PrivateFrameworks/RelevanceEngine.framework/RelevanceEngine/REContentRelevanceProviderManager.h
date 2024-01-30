@class NSString, REMLSentimentAnalyzer;

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver> {
    REMLSentimentAnalyzer *_sentimentAnalyzer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_relevanceProviderClass;
+ (id)_features;

- (void).cxx_destruct;
- (void)predictorDidUpdate:(id)a0;
- (void)pause;
- (void)resume;
- (void)modelManagerDidUpdateModel:(id)a0;
- (id)_valuesForProvider:(id)a0 context:(id)a1 features:(id)a2;
- (BOOL)_suppportsPortarit;
- (BOOL)_suppportsSentimentAnalysis;

@end
