@interface WeatherMaps.ScrubberOverlayViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ scrubberView;
    void /* unknown type, empty encoding */ scrubberForecastHintView;
    void /* unknown type, empty encoding */ storeObserver;
    void /* unknown type, empty encoding */ hideTimer;
    void /* unknown type, empty encoding */ hideDelay;
    void /* unknown type, empty encoding */ horizontalPadding;
    void /* unknown type, empty encoding */ verticalSpacingBeneathForecastHint;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end
