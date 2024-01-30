@class NSString, NSTimer;
@protocol SBFBlockStatusProvider;

@interface SBFDeviceBlockTimer : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic, setter=_setBlockStatusProvider:) id<SBFBlockStatusProvider> blockStatusProvider;
@property (retain, nonatomic, setter=_setTimer:) NSTimer *timer;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL enabled;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (void)_clearTimer;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (id)initWithDeviceBlockStatusProvider:(id)a0;
- (void)invalidate;

@end
