@interface CoreAudioKit.AURealtimeDrawingBaseViewController : CoreAudioKit.AUAppleViewControllerBase {
    void /* unknown type, empty encoding */ renderingPollingInterval;
    void /* unknown type, empty encoding */ numChannels;
    void /* unknown type, empty encoding */ meterTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_decimalFormatter;
}

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)checkLastRenderedTime;

@end
