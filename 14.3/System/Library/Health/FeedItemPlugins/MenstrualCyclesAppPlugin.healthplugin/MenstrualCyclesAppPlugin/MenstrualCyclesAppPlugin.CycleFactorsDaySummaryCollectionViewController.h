@interface MenstrualCyclesAppPlugin.CycleFactorsDaySummaryCollectionViewController : UICollectionViewController <HKMCAnalysisProviderObserver, HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ viewModelProvider;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ cycleDay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_settingsManager;
    void /* unknown type, empty encoding */ periodPredictionStatus;
    void /* unknown type, empty encoding */ fertileWindowPredictionStatus;
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ predictionStatusChanged;
    void /* unknown type, empty encoding */ ongoingCycleFactors;
    void /* unknown type, empty encoding */ collectionViewSource;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewModelProviderDidUpdate:(id)a0;
- (void)pushAddFactorView;

@end
