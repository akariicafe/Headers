@class NSNumber, NMNotificationObserver;
@protocol NMBUIPowerSourceInfoDelegate;

@interface NMBUIPowerSourceInfo : NSObject {
    NSNumber *_lastNotifiedExternalPowerSourceConnected;
    NMNotificationObserver *_accessoryNotificationObserver;
    NMNotificationObserver *_powerSourceNotificationObserver;
}

@property (weak, nonatomic) id<NMBUIPowerSourceInfoDelegate> delegate;
@property (readonly, nonatomic, getter=hasExternalPowerSourceConnected) BOOL externalPowerSourceConnected;

- (void).cxx_destruct;
- (void)_handlePowerSourceNotification;
- (BOOL)_hasExternalPowerSourceConnected;

@end
