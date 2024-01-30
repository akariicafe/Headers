@class NSMutableDictionary, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface ASCompetitionStore : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_currentCompetitionListCache;
    NSMutableDictionary *_archivedCompetitionListCache;
    NSMutableDictionary *_remoteCompetitionListCache;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)deleteCachedCompetitions;
- (id)archivedCompetitionListForFriendWithUUID:(id)a0;
- (id)currentRemoteCompetitionForContact:(id)a0;
- (id)currentCompetitionListForFriendWithUUID:(id)a0;
- (BOOL)saveCompetitionLists:(id)a0;
- (BOOL)saveRemoteCompetitionList:(id)a0;
- (BOOL)loadCachedCompetitions;
- (void)_queue_saveCompetitionListsToCache:(id)a0 owner:(long long)a1;
- (id)_cachedCompetitionListForFriendWithUUID:(id)a0 type:(long long)a1 owner:(long long)a2;
- (BOOL)_saveCompetitionLists:(id)a0 owner:(long long)a1;
- (BOOL)_saveCompetitionListToDatabase:(id)a0 owner:(long long)a1 error:(id *)a2;
- (BOOL)_removeCompetitionsWithFriendFromDatabase:(id)a0 type:(long long)a1 error:(id *)a2;
- (BOOL)_saveCompetitionsToDatabase:(id)a0 friendUUID:(id)a1 type:(long long)a2 error:(id *)a3;
- (id)_queue_competitionListCacheForType:(long long)a0 owner:(long long)a1;

@end
