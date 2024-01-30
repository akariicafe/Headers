@class NSString, REMLSentimentAnalyzer;

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver> {
    REMLSentimentAnalyzer *_sentimentAnalyzer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (void)pause;
- (void).cxx_destruct;
- (void)resume;
- (BOOL)_suppportsPortarit;
- (BOOL)_suppportsSentimentAnalysis;
- (id)_valuesForProvider:(id)a0 context:(id)a1 features:(id)a2;
- (void)modelManagerDidUpdateModel:(id)a0;
- (void)predictorDidUpdate:(id)a0;

@end
