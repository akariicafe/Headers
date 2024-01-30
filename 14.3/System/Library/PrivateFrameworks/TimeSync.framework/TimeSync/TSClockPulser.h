@class NSString, TSClock;

@interface TSClockPulser : NSObject <TSClockClient> {
    TSClock *_pulseClock;
    BOOL _hasLastTimestamp;
    BOOL _holdoverMode;
    int _lastLockState;
    BOOL _threadIsRunning;
    BOOL _threadShouldBeRunning;
    unsigned int _startSemaphore;
    unsigned int _stopSemaphore;
}

@property (copy, nonatomic) id /* block */ pulseHandler;
@property (nonatomic) BOOL useRealtimePriority;
@property (nonatomic) unsigned long long pulsePeriod;
@property (nonatomic) int pulseOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)didEndClockGrandmasterChangeForClock:(id)a0;
- (void)pulseThread;
- (void)didBeginClockGrandmasterChangeForClock:(id)a0;
- (id)initWithPulseClock:(id)a0;
- (BOOL)startPulsing;
- (BOOL)stopPulsing;

@end
