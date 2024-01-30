@interface PFManagedObjectContextMonitor : NSObject {
    void /* unknown type, empty encoding */ signpost;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ pingInterval;
    void /* unknown type, empty encoding */ shortHangDuration;
    void /* unknown type, empty encoding */ severeHangDuration;
    void /* unknown type, empty encoding */ criticalHangDuration;
    void /* unknown type, empty encoding */ criticalHangRepeatInterval;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ multiTimer;
    void /* unknown type, empty encoding */ pingTimer;
}

- (void)endMonitoring;
- (void)beginMonitoring;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 label:(long long)a1 pingInterval:(double)a2 shortHangDuration:(double)a3 severeHangDuration:(double)a4 criticalHangDuration:(double)a5 criticalHangRepeatInterval:(double)a6;

@end
