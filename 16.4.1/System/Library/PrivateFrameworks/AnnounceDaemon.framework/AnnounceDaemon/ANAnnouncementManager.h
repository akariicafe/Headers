@class NSUUID, NSMutableDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_os_log, ANAnnouncementManagerDelegte;

@interface ANAnnouncementManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *timers;
@property (readonly, nonatomic) NSMutableDictionary *homeAnnouncements;
@property (nonatomic) BOOL timersSuspended;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSUUID *endpointID;
@property (weak, nonatomic) id<ANAnnouncementManagerDelegte> delegate;
@property (readonly, nonatomic) NSArray *allAnnouncementsSortedByReceipt;

+ (id)managerWithEndpointID:(id)a0;

- (void)_startTimer:(id)a0;
- (void)cleanForExit;
- (void)_addAnnouncementToReceiveQueue:(id)a0;
- (BOOL)_shouldAccept:(id)a0 accept:(id /* block */)a1;
- (id)announcementForID:(id)a0;
- (void)_removeAnnouncementsHittingStorageAgeLimit;
- (id)announcementsForGroupID:(id)a0;
- (void)_notifyDelegateAnnouncementsChangedForGroupID:(id)a0;
- (void)_startTimerWithID:(id)a0;
- (void)addAnnouncement:(id)a0 completion:(id /* block */)a1;
- (void)removeAllAnnouncements;
- (void)_removeAnnouncementWithID:(id)a0;
- (void)_removeAnnouncementsForGroupID:(id)a0;
- (void)resetAllTimers;
- (void)updateAnnouncement_sync:(id)a0 statusFlags:(unsigned long long)a1;
- (void)_loadStoredAnnouncements;
- (void)_cleanDirectory;
- (void)pauseAllTimers;
- (id)initWithEndpointID:(id)a0;
- (void)_suspendTimer:(id)a0;
- (void)_addAnnouncement:(id)a0 home:(id)a1 groupID:(id)a2;
- (void)_resetTimer:(id)a0;
- (void)_handleExpiredTimer:(id)a0 withID:(id)a1;
- (id)announcementsForIDs:(id)a0;
- (void).cxx_destruct;
- (void)resumeAllTimers;
- (void)removeOldAnnouncements;

@end
