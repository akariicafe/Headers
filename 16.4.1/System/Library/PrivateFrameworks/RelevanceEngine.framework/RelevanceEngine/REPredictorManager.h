@class RERelevanceEngine, NSString, NSArray, NSDictionary, REObserverStore;

@interface REPredictorManager : NSObject <REPredictorObserver> {
    NSArray *_predictors;
    NSDictionary *_predictorsMap;
    REObserverStore *_observer;
    RERelevanceEngine *_engine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)pause;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)enumeratePredictors:(id /* block */)a0;
- (void)enumerateValuesForElement:(id)a0 trainingContext:(id)a1 usingBlock:(id /* block */)a2;
- (id)initWithPredictors:(id)a0 featureSet:(id)a1 relevanceEngine:(id)a2;
- (void)predictor:(id)a0 didBeginActivity:(id)a1;
- (void)predictor:(id)a0 didFinishActivity:(id)a1;
- (void)predictorDidUpdate:(id)a0;

@end
