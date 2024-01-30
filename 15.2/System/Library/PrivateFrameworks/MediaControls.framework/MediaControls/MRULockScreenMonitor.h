@protocol MRULockScreenMonitorDelegate;

@interface MRULockScreenMonitor : NSObject

@property (nonatomic) int mobileKeyBagLockStatusNotifyToken;
@property (weak, nonatomic) id<MRULockScreenMonitorDelegate> delegate;
@property (readonly, nonatomic, getter=isDeviceLocked) BOOL deviceLocked;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)updateDeviceLocked;
- (void)dealloc;
- (void)setDeviceLocked:(BOOL)a0;

@end
