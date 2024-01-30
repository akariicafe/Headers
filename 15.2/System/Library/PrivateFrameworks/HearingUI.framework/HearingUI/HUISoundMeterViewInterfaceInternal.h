@interface HUISoundMeterViewInterfaceInternal : NSObject {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ soundMeterView;
    void /* unknown type, empty encoding */ logger;
}

- (id)initWithConfigurationType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)soundMeterViewController;
- (void)updateViewsWithSlowLeq:(double)a0 fastLeq:(double)a1 thresholdLevel:(unsigned long long)a2;

@end
