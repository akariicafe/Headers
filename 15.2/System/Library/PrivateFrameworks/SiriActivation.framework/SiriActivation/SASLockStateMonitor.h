@class NSNumber;
@protocol SASLockStateMonitorDelegate;

@interface SASLockStateMonitor : NSObject

@property (nonatomic) unsigned long long lockState;
@property (nonatomic) BOOL unlockedByTouchID;
@property (retain, nonatomic) NSNumber *assistantIsEnabled;
@property (weak, nonatomic) id<SASLockStateMonitorDelegate> delegate;

- (void)_lockStateDidChange:(id)a0;
- (BOOL)isScreenOn;
- (BOOL)hasUnlockedSinceBoot;
- (void)_updateLockState;
- (BOOL)isBlocked;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_currentLockState;
- (void)dealloc;

@end
