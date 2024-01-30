@class HKObserverSet, HKHealthStore, HKMCAnalysis, HKMCAnalysisQuery, NSObject;
@protocol OS_dispatch_queue;

@interface HKMCAnalysisProvider : NSObject {
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    HKMCAnalysisQuery *_analysisQuery;
    HKMCAnalysis *_analysis;
    BOOL _didUpdate;
}

@property (retain, nonatomic) HKMCAnalysis *_test_analysis;
@property (readonly, nonatomic) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)description;
- (void)addObserver:(id)a0 queue:(id)a1;
- (id)initWithHealthStore:(id)a0;
- (id)initWithHealthStore:(id)a0 initialAnalysisForTest:(id)a1;
- (void)_startAnalysisQuery;
- (void)_updateAnalysis:(id)a0;

@end
