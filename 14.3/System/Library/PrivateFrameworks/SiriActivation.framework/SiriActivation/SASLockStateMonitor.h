@class NSNumber;
@protocol SASLockStateMonitorDelegate;

@interface SASLockStateMonitor : NSObject

@property (nonatomic) unsigned long long lockState;
@property (nonatomic) BOOL unlockedByTouchID;
@property (retain, nonatomic) NSNumber *assistantIsEnabled;
@property (weak, nonatomic) id<SASLockStateMonitorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_updateLockState;
- (void)dealloc;
- (BOOL)hasUnlockedSinceBoot;
- (BOOL)isBlocked;
- (unsigned long long)_currentLockState;
- (void)_lockStateDidChange:(id)a0;
- (BOOL)isScreenOn;

@end
