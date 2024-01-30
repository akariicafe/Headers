@interface MenstrualCyclesAppPlugin.CycleFactorsSectionViewController : UIViewController <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ cycleFactorsSectionView;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
