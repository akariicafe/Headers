@class NSString, HDSPDeviceUnlockMonitor;
@protocol HDSPSleepSessionPersistence, HDSPSleepSessionManagerDelegate;

@interface HDSPSleepSessionManager : NSObject <HDSPSleepTrackerDelegate, HDSPDeviceUnlockObserver>

@property (readonly, nonatomic) id<HDSPSleepSessionPersistence> persistence;
@property (readonly, nonatomic) HDSPDeviceUnlockMonitor *deviceUnlockManager;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } sessionLock;
@property (weak, nonatomic) id<HDSPSleepSessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_archivedSessionDirectory;
+ (id)_archivedSessionFile;

- (void)savePendingSessions;
- (void)startSession;
- (void)sleepTrackerDidStartSession:(id)a0;
- (id)_unprocessedSessions;
- (id)saveSession:(id)a0;
- (void)_locked_savePendingSessions;
- (void)_waitForFirstUnlock;
- (void)sleepTracker:(id)a0 didEndSession:(id)a1 reason:(unsigned long long)a2;
- (void)deviceHasBeenUnlocked;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)archiveSession:(id)a0;
- (void)stopSession;
- (void)removeSessionDataFile;
- (BOOL)_hasUnprocessedSessions;
- (void)_withLock:(id /* block */)a0;
- (id)initWithEnvironment:(id)a0 persistence:(id)a1;

@end
