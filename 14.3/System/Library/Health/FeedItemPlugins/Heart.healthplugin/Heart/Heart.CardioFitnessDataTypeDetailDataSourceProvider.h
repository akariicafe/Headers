@interface Heart.CardioFitnessDataTypeDetailDataSourceProvider : NSObject <HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ featureStatusManagerQueue;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ chartDataSource;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;

@end
