@interface MobileTimerSupport.TimerContext : NSObject {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ timerId;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ remainingTime;
    void /* unknown type, empty encoding */ firedDate;
    void /* unknown type, empty encoding */ dismissedDate;
    void /* unknown type, empty encoding */ firing;
    void /* unknown type, empty encoding */ title;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 timerId:(id)a1 duration:(double)a2 remainingTime:(double)a3 firing:(BOOL)a4 title:(id)a5;

@end
