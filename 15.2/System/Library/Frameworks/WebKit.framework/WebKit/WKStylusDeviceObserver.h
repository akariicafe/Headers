@interface WKStylusDeviceObserver : NSObject {
    unsigned long long _startCount;
    struct RetainPtr<NSTimer> { void *m_ptr; } _changeTimer;
}

@property (readonly, nonatomic) BOOL hasStylusDevice;

+ (id)sharedInstance;

- (void)startChangeTimer:(double)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setHasStylusDevice:(BOOL)a0;
- (void)changeTimerFired:(id)a0;
- (id).cxx_construct;
- (void)stop;

@end
