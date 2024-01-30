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

- (id)initWithHealthStore:(id)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)removeObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHealthStore:(id)a0 initialAnalysisForTest:(id)a1;
- (void)_startAnalysisQuery;
- (void)_updateAnalysis:(id)a0;

@end
