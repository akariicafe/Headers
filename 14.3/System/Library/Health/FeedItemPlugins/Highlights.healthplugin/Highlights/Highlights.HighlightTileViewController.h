@class NSString;

@interface Highlights.HighlightTileViewController : UIViewController <HealthVisualization.UnitChangeObserving, HealthVisualization.SignificantTimeChangeObserving> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_healthStore;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ debug_textSupportVariantOverrideUpdateNotificationToken;
}

@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)significantTimeChangeDidOccur;
- (void)unitDidChange;
- (void)updateWithShouldUpdateContentView:(BOOL)a0;

@end
