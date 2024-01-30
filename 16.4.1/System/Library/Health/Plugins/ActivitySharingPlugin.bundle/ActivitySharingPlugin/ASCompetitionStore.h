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
- (BOOL)loadCachedCompetitions;
- (BOOL)_saveCompetitionLists:(id)a0 owner:(long long)a1;
- (void)_queue_saveCompetitionListsToCache:(id)a0 owner:(long long)a1;
- (id)currentRemoteCompetitionForContact:(id)a0;
- (BOOL)_removeCompetitionsWithFriendFromDatabase:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)_queue_competitionListCacheForType:(long long)a0 owner:(long long)a1;
- (void)deleteCachedCompetitions;
- (BOOL)_saveCompetitionListToDatabase:(id)a0 owner:(long long)a1 error:(id *)a2;
- (id)_cachedCompetitionListForFriendWithUUID:(id)a0 type:(long long)a1 owner:(long long)a2;
- (id)archivedCompetitionListForFriendWithUUID:(id)a0;
- (BOOL)saveRemoteCompetitionList:(id)a0;
- (id)currentCompetitionListForFriendWithUUID:(id)a0;
- (void).cxx_destruct;
- (BOOL)_saveCompetitionsToDatabase:(id)a0 friendUUID:(id)a1 type:(long long)a2 error:(id *)a3;
- (BOOL)saveCompetitionLists:(id)a0;

@end
