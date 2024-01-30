@interface MagnifierSupport.ActivityPresetScrubberValuesViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ heightConstant;
    void /* unknown type, empty encoding */ cameraVideoPreviewView;
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ sessionQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrubberButton;
    void /* unknown type, empty encoding */ brightness;
    void /* unknown type, empty encoding */ contrast;
    void /* unknown type, empty encoding */ globalZoomPercentage;
    void /* unknown type, empty encoding */ zoomPercentage;
    void /* unknown type, empty encoding */ globalFlashlightPercentage;
    void /* unknown type, empty encoding */ flashlightPercentage;
    void /* unknown type, empty encoding */ globalSelectedFilters;
    void /* unknown type, empty encoding */ globalCurrentSelectedFilter;
    void /* unknown type, empty encoding */ currentSelectedFilters;
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ currentFilterSubscription;
    void /* unknown type, empty encoding */ photoOutput;
    void /* unknown type, empty encoding */ cameraCaptureDevice;
}

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;

@end
