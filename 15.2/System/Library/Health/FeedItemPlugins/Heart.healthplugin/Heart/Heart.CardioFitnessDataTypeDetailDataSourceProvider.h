@interface Heart.CardioFitnessDataTypeDetailDataSourceProvider : NSObject <HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ hkType;
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ featureStatusManagerQueue;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ chartDataSource;
    void /* unknown type, empty encoding */ chartWithTrendDataSource;
    void /* unknown type, empty encoding */ currentVariant;
    void /* unknown type, empty encoding */ dataTypeDetailMode;
}

- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
