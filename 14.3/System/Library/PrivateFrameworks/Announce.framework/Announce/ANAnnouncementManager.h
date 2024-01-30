@class NSMutableDictionary, NSArray, NSURL, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ANAnnouncementManager : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
}

@property (retain, nonatomic) NSMutableDictionary *timers;
@property (retain, nonatomic) NSMutableDictionary *homeAnnouncements;
@property (readonly, nonatomic) NSURL *announcementDataDirectory;
@property (retain, nonatomic) NSMutableSet *delegates;
@property (nonatomic) BOOL timersSuspended;
@property (readonly, nonatomic) NSArray *allAnnouncementIDs;
@property (readonly, nonatomic) NSArray *allAnnouncementsSortedByReceipt;
@property (readonly, nonatomic) NSArray *allAnnouncementContextsSortedByReceipt;
@property (readonly, nonatomic) unsigned long long allAnnouncementCount;

+ (id)sharedManager;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)init;
- (void)_startTimer:(id)a0;
- (void).cxx_destruct;
- (void)resetAllTimers;
- (void)cleanForExit;
- (id)announcementForID:(id)a0;
- (void)addAnnouncement:(id)a0 completion:(id /* block */)a1;
- (void)_cleanDirectory;
- (BOOL)_shouldAccept:(id)a0 accept:(id /* block */)a1;
- (id)announcementsForGroupID:(id)a0;
- (void)_notifyDelegatesAnnouncementsChangedForGroupID:(id)a0;
- (void)_addAnnouncement:(id)a0 home:(id)a1 groupID:(id)a2;
- (void)_removeAnnouncementsForGroupID:(id)a0;
- (void)_removeAnnouncementsHittingStorageAgeLimit;
- (void)_saveAnnouncement:(id)a0 forType:(unsigned long long)a1;
- (void)_startTimerWithID:(id)a0;
- (void)_suspendTimer:(id)a0;
- (void)_resetTimer:(id)a0;
- (void)_removeDataForAnnouncementID:(id)a0;
- (void)_removeAnnouncementFromQueueWithID:(id)a0;
- (id)announcementDataDirectoryForType:(unsigned long long)a0;
- (id)_pathComponentForAnnouncementType:(unsigned long long)a0;
- (void)_handleExpiredTimer:(id)a0 withID:(id)a1;
- (void)_removeAnnouncementWithID:(id)a0;
- (void)updateAnnouncement_sync:(id)a0 statusFlags:(unsigned long long)a1;
- (id)announcementContextsForGroupID:(id)a0;
- (id)announcementsForIDs:(id)a0;
- (void)removeOldAnnouncements;
- (void)pauseAllTimers;
- (void)resumeAllTimers;
- (void)_wipeFileDataForAnnouncement:(id)a0;

@end
