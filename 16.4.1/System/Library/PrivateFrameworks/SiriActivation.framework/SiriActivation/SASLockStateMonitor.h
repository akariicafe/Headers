@class NSNumber;
@protocol SASLockStateMonitorDelegate;

@interface SASLockStateMonitor : NSObject

@property (nonatomic) unsigned long long lockState;
@property (nonatomic) BOOL unlockedByTouchID;
@property (retain, nonatomic) NSNumber *assistantIsEnabled;
@property (weak, nonatomic) id<SASLockStateMonitorDelegate> delegate;

- (BOOL)hasUnlockedSinceBoot;
- (BOOL)isScreenOn;
- (BOOL)isBlocked;
- (void)_updateLockState;
- (void)_lockStateDidChange:(id)a0;
- (void)dealloc;
- (unsigned long long)_currentLockState;
- (id)init;
- (void).cxx_destruct;

@end
