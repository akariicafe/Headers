@class NSNumber, NMBUINotificationObserver;
@protocol NMBUIPowerSourceInfoDelegate;

@interface NMBUIPowerSourceInfo : NSObject {
    NSNumber *_lastNotifiedExternalPowerSourceConnected;
    NMBUINotificationObserver *_accessoryNotificationObserver;
    NMBUINotificationObserver *_powerSourceNotificationObserver;
}

@property (weak, nonatomic) id<NMBUIPowerSourceInfoDelegate> delegate;
@property (readonly, nonatomic, getter=hasExternalPowerSourceConnected) BOOL externalPowerSourceConnected;

- (void).cxx_destruct;
- (void)_handlePowerSourceNotification;
- (BOOL)_hasExternalPowerSourceConnected;

@end
