@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSDaemon : NSObject

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer *hysteresisTimer;
@property (nonatomic) BOOL stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue;

- (BOOL)isBusy;
- (id)init;
- (void).cxx_destruct;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (void)didIdle;
- (void)retainBusy;
- (void)releaseBusy;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (void)didUnidle;
- (void)_didChangeIdleBusyState:(BOOL)a0;
- (void)_hysteresisTimerDidFire:(id)a0;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;

@end
