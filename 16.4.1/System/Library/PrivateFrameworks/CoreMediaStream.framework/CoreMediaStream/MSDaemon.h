@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSDaemon : NSObject

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer *hysteresisTimer;
@property (nonatomic) BOOL stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue;

- (void)retainBusy;
- (void)releaseBusy;
- (BOOL)isBusy;
- (void)didUnidle;
- (void)releasePowerAssertion;
- (id)init;
- (void)releaseUIBusy;
- (void)retainUIBusy;
- (void).cxx_destruct;
- (void)didIdle;
- (void)_didChangeIdleBusyState:(BOOL)a0;
- (void)_hysteresisTimerDidFire:(id)a0;
- (void)retainPowerAssertion;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;

@end
