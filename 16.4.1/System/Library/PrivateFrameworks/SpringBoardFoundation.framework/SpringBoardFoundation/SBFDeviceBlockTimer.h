@class NSString, NSTimer;
@protocol SBFBlockStatusProvider;

@interface SBFDeviceBlockTimer : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *timeoutText;
@property (copy, nonatomic) NSString *primaryActionButtonText;
@property (nonatomic, getter=isUserRequestedEraseEnabled) BOOL userRequestedEraseEnabled;
@property (retain, nonatomic, setter=_setBlockStatusProvider:) id<SBFBlockStatusProvider> blockStatusProvider;
@property (retain, nonatomic, setter=_setTimer:) NSTimer *timer;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL enabled;
@property (copy, nonatomic) id /* block */ handler;

- (void)dealloc;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (id)initWithDeviceBlockStatusProvider:(id)a0;

@end
