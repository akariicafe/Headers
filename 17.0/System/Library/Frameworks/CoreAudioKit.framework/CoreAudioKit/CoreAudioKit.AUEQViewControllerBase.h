@interface CoreAudioKit.AUEQViewControllerBase : CoreAudioKit.AUAppleViewControllerBase {
    void /* unknown type, empty encoding */ $__lazy_storage_$_eqView;
    void /* unknown type, empty encoding */ previousSize;
    void /* unknown type, empty encoding */ displayMode;
    void /* unknown type, empty encoding */ frequencyData;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wholeNumberFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_decimalFormatter;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)auGraphBeginGestureWithNotification:(id)a0;
- (void)auGraphEndGestureWithNotification:(id)a0;
- (void)auParameterValueChangedWithNotification:(id)a0;

@end
