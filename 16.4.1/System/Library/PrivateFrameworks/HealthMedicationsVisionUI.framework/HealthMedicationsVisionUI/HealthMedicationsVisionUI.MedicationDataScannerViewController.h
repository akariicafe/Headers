@interface HealthMedicationsVisionUI.MedicationDataScannerViewController : UIViewController <HKOntologyStoreObserver> {
    void /* unknown type, empty encoding */ scannerDelegate;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ assetReady;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ ontologyStore;
    void /* unknown type, empty encoding */ resolutionEngine;
    void /* unknown type, empty encoding */ dataLock;
    void /* unknown type, empty encoding */ analyticsContext;
    void /* unknown type, empty encoding */ tokenizer;
    void /* unknown type, empty encoding */ allTokens;
    void /* unknown type, empty encoding */ accumulatedText;
    void /* unknown type, empty encoding */ accumulatedBarcodes;
    void /* unknown type, empty encoding */ controlTimer;
    void /* unknown type, empty encoding */ coordinatorCanceller;
    void /* unknown type, empty encoding */ assetStateCanceller;
    void /* unknown type, empty encoding */ introductionView;
    void /* unknown type, empty encoding */ hasShownIntroduction;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ analyticsCurrentAlgorithmType;
    void /* unknown type, empty encoding */ analyticsCurrentStep;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataScannerViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapToRadarButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_regionOfInterestOverlay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedbackGenerator;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)ontologyStore:(id)a0 didImportEntry:(id)a1;
- (void)ontologyStore:(id)a0 didStageEntry:(id)a1;
- (void)ontologyStoreDidReconnect:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)tapToRadarButtonTappedWithSender:(id)a0;
- (void)onClose;

@end
