@class HDDataManager, ASContactsManager, HDProfile, ASActivityDataBulletinManager, ACHAchievementStore, NSObject, ASActivityDataManager, ASPeriodicUpdateManager, NSString, ASActivityDataNotificationRulesEngine, ASFriendListManager, NSNumber, ASCloudKitManager;
@protocol OS_dispatch_queue;

@interface ASActivityDataNotificationManager : NSObject <HDDataObserver, ASCloudKitManagerChangesObserver, ASActivitySharingManagerReadyObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    HDDataManager *_dataManager;
    ACHAchievementStore *_achievementStore;
    BOOL _receivedChangesFromCloudKit;
    BOOL _isCloudKitManagerProcessingData;
}

@property (retain, nonatomic) ASActivityDataNotificationRulesEngine *notificationRulesEngine;
@property (retain, nonatomic) NSNumber *workoutAnchor;
@property (retain, nonatomic) NSNumber *achievementAnchor;
@property (retain, nonatomic) NSNumber *goalCompletionAnchor;
@property (weak, nonatomic) ASCloudKitManager *cloudKitManager;
@property (weak, nonatomic) ASActivityDataManager *activityDataManager;
@property (weak, nonatomic) ASContactsManager *contactsManager;
@property (weak, nonatomic) ASFriendListManager *friendListManager;
@property (weak, nonatomic) ASActivityDataBulletinManager *activityDataBulletinManager;
@property (weak, nonatomic) ASPeriodicUpdateManager *periodicUpdateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isReadyToProcessChanges;

- (id)init;
- (void).cxx_destruct;
- (void)beginObserving;
- (void)dealloc;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)endObserving;
- (void)activitySharingManagerReady:(id)a0;
- (void)cloudKitManager:(id)a0 didBeginUpdatesForFetchWithType:(long long)a1;
- (void)cloudKitManager:(id)a0 didEndUpdatesForFetchWithType:(long long)a1;
- (void)cloudKitManager:(id)a0 didRecieveNewActivitySnapshots:(id)a1 moreComing:(BOOL)a2 changesProcessedHandler:(id /* block */)a3;
- (void)cloudKitManager:(id)a0 didRecieveNewFriendWorkouts:(id)a1 moreComing:(BOOL)a2 changesProcessedHandler:(id /* block */)a3;
- (void)cloudKitManager:(id)a0 didRecieveNewFriendAchievements:(id)a1 moreComing:(BOOL)a2 changesProcessedHandler:(id /* block */)a3;
- (void)cloudKitManager:(id)a0 didRecieveNewNotificationEvents:(id)a1 moreComing:(BOOL)a2 changesProcessedHandler:(id /* block */)a3;
- (void)_queue_showFriendNotificationsIfRequired;
- (void)_notifyAboutWorkoutsDetectionIfRequired:(id)a0;
- (id)_nanoUserDefaultsDomainWithProfile:(id)a0;
- (id)_nanoUserDefaultsDomainKeyForFriendWithUUID:(id)a0 keyTypeString:(id)a1;
- (id)_localUserDefaultsDomainWithProfile:(id)a0;
- (id)_queue_selectWorkoutNotifications;
- (id)_queue_selectAchievementNotifications;
- (id)_queue_selectGoalCompletionNotifications;
- (id)_mostRecentWorkoutCompletionDateForFriendWithUUID:(id)a0;
- (void)_setMostRecentWorkoutCompletionDate:(id)a0 forFriendWithUUID:(id)a1;
- (id)_mostRecentMonthlyAchievementEarnedDateForFriendWithUUID:(id)a0;
- (id)_mostRecentAchievementEarnedDateForFriendWithUUID:(id)a0;
- (void)_setMostRecentAchievementEarnedDate:(id)a0 forFriendWithUUID:(id)a1;
- (void)_setMostRecentMonthlyAchievementEarnedDate:(id)a0 forFriendWithUUID:(id)a1;
- (id)_mostRecentGoalCompletedSnapshotIndexForFriendWithUUID:(id)a0;
- (void)_setMostRecentGoalCompletedSnapshotIndex:(id)a0 forFriendWithUUID:(id)a1;

@end
