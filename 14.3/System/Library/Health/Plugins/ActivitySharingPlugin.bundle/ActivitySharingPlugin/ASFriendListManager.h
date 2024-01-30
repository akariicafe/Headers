@class ASAchievementManager, ASContactsManager, ASActivityDataManager, NSString, NSSet, NSHashTable, NSDate, ASRelationshipManager, HDProfile, NSObject, ASPeriodicUpdateManager, ASCompetitionManager;
@protocol OS_dispatch_queue;

@interface ASFriendListManager : NSObject <ASContactsManagerObserver, ASCompetitionManagerObserver, CHFitnessAppBadgeCountProvider, ASActivitySharingManagerReadyObserver> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSSet *_friends;
    BOOL _hasFriendsToShareWith;
    BOOL _competitionDataAvailable;
    NSObject<OS_dispatch_queue> *_friendListQueue;
    int _activitySharingHasFriendsChangedToken;
    NSDate *_lastReportedFriendsDate;
    long long _lastReportedNumberOfFriends;
}

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ASActivityDataManager *activityDataManager;
@property (weak, nonatomic) ASContactsManager *contactsManager;
@property (weak, nonatomic) ASRelationshipManager *relationshipManager;
@property (weak, nonatomic) ASPeriodicUpdateManager *periodicUpdateManager;
@property (weak, nonatomic) ASCompetitionManager *competitionManager;
@property (weak, nonatomic) ASAchievementManager *achievementManager;
@property (nonatomic) BOOL isWatch;
@property (readonly) BOOL hasFriendsToShareWith;
@property (readonly, copy, nonatomic) NSSet *friends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long badgeCount;

- (void)queryAppBadgeCountWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)clearFriendListWithCompletion:(id /* block */)a0;
- (void)endObserving;
- (id)friendWithUUID:(id)a0;
- (void)activitySharingManagerReady:(id)a0;
- (id)initWithIsWatch:(BOOL)a0;
- (void)_handleHasFriendsChanged;
- (void)_queue_updateFriendList;
- (id)_queue_friendWithUUID:(id)a0;
- (id)_allContactsPreferringPlaceholderContacts;
- (void)_queue_friendListDidUpdate;
- (void)_queue_notifyObserversOfCompetitionsLoaded;
- (void)_queue_notifyObserversOfFriendListChanges;
- (BOOL)_queue_hasFriendsToShareWith;
- (void)contactsManagerDidUpdateContacts:(id)a0;
- (void)competitionManagerDidLoadCachedCompetitions:(id)a0;
- (void)competitionManager:(id)a0 didUpdateCompetitionsForFriendsWithUUIDs:(id)a1;
- (void)initializeFriendListAndBeginObserving;
- (void)fetchfriendDataWithRemoteUUID:(id)a0 completion:(id /* block */)a1;
- (void)updateFriendListWithNewSnapshots:(id)a0 achievements:(id)a1 workouts:(id)a2;
- (void)updateFriendListWithDeletedWorkoutEvents:(id)a0;

@end
