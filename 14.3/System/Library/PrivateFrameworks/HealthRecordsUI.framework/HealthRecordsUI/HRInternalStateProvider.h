@interface HRInternalStateProvider : NSObject <HKHealthRecordsStoreIngestionStateListener, HKConceptStoreObserver> {
    void /* unknown type, empty encoding */ conceptStore;
    void /* unknown type, empty encoding */ healthRecordsStore;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ recordCounts;
    void /* unknown type, empty encoding */ sub;
    void /* unknown type, empty encoding */ loadState;
    void /* unknown type, empty encoding */ changeHandler;
    void /* unknown type, empty encoding */ isObserving;
}

- (void)healthRecordsStore:(id)a0 ingestionStateDidUpdateTo:(long long)a1;
- (void)conceptStore:(id)a0 indexManagerDidChangeState:(unsigned long long)a1;
- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchJSONWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0;

@end
