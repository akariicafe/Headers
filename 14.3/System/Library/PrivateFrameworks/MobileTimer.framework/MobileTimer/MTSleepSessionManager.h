@class MTAlarmStorage, HKHealthStore, NSString;
@protocol MTSleepSessionTrackerDelegate, NAScheduler, MTSleepSessionTracker;

@interface MTSleepSessionManager : NSObject <MTSleepSessionTrackerDelegate>

@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (copy, nonatomic) NSString *archivedSessionDataPath;
@property (copy, nonatomic) NSString *archivedSessionDataFile;
@property (retain, nonatomic) id<MTSleepSessionTracker> sleepSessionTracker;
@property (weak, nonatomic) id<MTSleepSessionTrackerDelegate> sleepSessionTrackerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformSpecificSourceBundleIdentifier;
+ (id)sleepSampleWithInterval:(id)a0 sampleType:(long long)a1 metadata:(id)a2;

- (BOOL)_hasUnprocessedSessions;
- (void).cxx_destruct;
- (id)writeSession:(id)a0;
- (void)waitForUnlock;
- (id)_writeSessions:(id)a0;
- (id)_writeSessionData;
- (void)deviceFirstUnlocked;
- (void)_removeSessionDataFile;
- (id)initWithAlarmStorage:(id)a0 sleepCoordinator:(id)a1 sleepSessionTracker:(id)a2;
- (void)saveSessionData;
- (void)archiveSession:(id)a0;
- (id)_unprocessedSessions;
- (void)sleepSessionTracker:(id)a0 sessionDidComplete:(id)a1;

@end
