@class NSString;

@interface MenstrualCyclesAppPlugin.MenstrualCyclesAnalysisChangeDetector : NSObject <HKMCSettingsManagerObserver> {
    void /* unknown type, empty encoding */ analysisQuery;
    void /* unknown type, empty encoding */ observerQueue;
    void /* unknown type, empty encoding */ generatorContext;
    void /* unknown type, empty encoding */ _currentAnalysisResult;
    void /* unknown type, empty encoding */ _settingsManager;
}

@property (nonatomic, readonly) NSString *description;

- (void)settingsManagerDidUpdateAnalysisSettings:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
