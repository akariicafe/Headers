@class HKUnitPreferenceController, HKAudiogramSample, HKHealthStore;
@protocol AIAudiogramConfirmResultsViewControllerDelegate;

@interface AIAudiogramConfirmResultsViewController : OBWelcomeController

@property (weak, nonatomic) id<AIAudiogramConfirmResultsViewControllerDelegate> delegate;
@property (retain, nonatomic) HKAudiogramSample *audiogram;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (nonatomic) BOOL analyticsDidMakeAdjustments;
@property (nonatomic) BOOL analyticsDidCompleteIngestion;
@property (nonatomic) unsigned long long analyticsImportSource;
@property (nonatomic) unsigned long long analyticsClient;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_saveToHealth:(id)a0;
- (id)initWithDelegate:(id)a0 audiogram:(id)a1;

@end
