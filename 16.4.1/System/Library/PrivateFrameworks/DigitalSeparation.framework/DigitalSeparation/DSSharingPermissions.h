@class NSArray, NSOrderedSet, NSMutableDictionary, NSDictionary, DSMe, DSSourceRepository, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface DSSharingPermissions : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _permissionsLock;
}

@property (retain, nonatomic) NSMutableOrderedSet *people;
@property (retain, nonatomic) NSOrderedSet *filteredPeople;
@property (retain, nonatomic) NSMutableOrderedSet *sharingTypes;
@property (retain, nonatomic) NSOrderedSet *filteredSharingTypes;
@property (retain, nonatomic) NSMutableOrderedSet *publicSharingTypes;
@property (retain, nonatomic) NSMutableDictionary *fetchStartTimesBySource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataUsageQueue;
@property (retain, nonatomic) DSSourceRepository *repo;
@property (retain, nonatomic) DSMe *me;
@property (readonly, nonatomic) long long publicSharingTypesCount;
@property (readonly, copy, nonatomic) NSArray *allPeople;
@property (readonly, copy, nonatomic) NSArray *allSharingTypes;
@property (readonly, copy, nonatomic) NSArray *allPublicSharingTypes;
@property (readonly, copy, nonatomic) NSDictionary *elapsedUnfinishedFetchesBySource;

+ (void)initialize;

- (void)sort;
- (id)init;
- (void).cxx_destruct;
- (void)removePerson:(id)a0;
- (void)fetchPermissionsOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)filterPeopleWithPredicate:(id)a0;
- (void)filterSharingTypesWithPredicate:(id)a0;
- (long long)peopleCountWithFilter:(BOOL)a0;
- (id)person:(long long)a0 withFilter:(BOOL)a1;
- (id)publicSharingType:(long long)a0;
- (void)removePerson:(id)a0 sources:(id)a1;
- (void)removePublicSharingType:(id)a0;
- (void)removeSharingType:(id)a0 people:(id)a1;
- (id)sharingType:(long long)a0 withFilter:(BOOL)a1;
- (long long)sharingTypesCountWithFilter:(BOOL)a0;
- (void)stopAllSharingOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)_trackResourceForPublicAccess:(id)a0 source:(id)a1;
- (void)addParticipant:(id)a0 forSource:(id)a1 sharedResource:(id)a2 deviceOwnerRole:(long long)a3;
- (void)fetchCompletedForSource:(id)a0;
- (void)fetchPermissionsFromSources:(id)a0 includingErrors:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)fetchStartedForSource:(id)a0;
- (void)removeSharingType:(id)a0;
- (BOOL)shouldAllowBundleIDWithNoPolicy:(id)a0;
- (void)verifyDataUsagePoliciesForSources:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
