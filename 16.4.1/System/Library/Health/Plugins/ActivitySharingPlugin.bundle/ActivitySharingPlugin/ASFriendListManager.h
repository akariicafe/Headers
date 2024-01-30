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

- (id)initWithIsWatch:(BOOL)a0;
- (void)endObserving;
- (void)fetchfriendDataWithRemoteUUID:(id)a0 completion:(id /* block */)a1;
- (void)updateFriendListWithNewSnapshots:(id)a0 achievements:(id)a1 workouts:(id)a2;
- (void)activitySharingManagerReady:(id)a0;
- (void)addObserver:(id)a0;
- (void)updateFriendListWithDeletedWorkoutEvents:(id)a0;
- (void)competitionManagerDidLoadCachedCompetitions:(id)a0;
- (void)_queue_friendListDidUpdate;
- (BOOL)_queue_hasFriendsToShareWith;
- (void)dealloc;
- (void)queryAppBadgeCountWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void)_queue_notifyObserversOfFriendListChanges;
- (void)initializeFriendListAndBeginObserving;
- (void)competitionManager:(id)a0 didUpdateCompetitionsForFriendsWithUUIDs:(id)a1;
- (void)_queue_updateFriendList;
- (id)_queue_friendWithUUID:(id)a0;
- (id)init;
- (id)_allContactsPreferringPlaceholderContacts;
- (void)clearFriendListWithCompletion:(id /* block */)a0;
- (void)contactsManagerDidUpdateContacts:(id)a0;
- (void)_handleHasFriendsChanged;
- (id)friendWithUUID:(id)a0;
- (void).cxx_destruct;
- (void)_queue_notifyObserversOfCompetitionsLoaded;

@end
