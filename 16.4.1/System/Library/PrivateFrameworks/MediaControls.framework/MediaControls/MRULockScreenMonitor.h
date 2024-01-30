@class NSArray, NSHashTable;

@interface MRULockScreenMonitor : NSObject

@property (nonatomic) int mobileKeyBagLockStatusNotifyToken;
@property (readonly, nonatomic) NSArray *observers;
@property (retain, nonatomic) NSHashTable *weakObservers;
@property (readonly, nonatomic, getter=isDeviceLocked) BOOL deviceLocked;

+ (id)sharedMonitor;

- (void)setDeviceLocked:(BOOL)a0;
- (void)updateDeviceLocked;
- (void)addObserver:(id)a0;
- (id)_init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;

@end
