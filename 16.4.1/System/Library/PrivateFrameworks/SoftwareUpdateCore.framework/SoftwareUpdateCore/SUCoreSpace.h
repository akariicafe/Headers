@class NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreSpace : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *spaceQueue;

+ (void)_issueSpaceCheckCompletion:(id /* block */)a0 withCompletionQueue:(id)a1 haveEnoughSpace:(BOOL)a2 haveTotalRequired:(BOOL)a3 freeSpaceAvailable:(unsigned long long)a4 error:(id)a5 releasingTransaction:(id)a6;
+ (void)_spaceCheckPhaseError:(id)a0 checkingFromBase:(id)a1 withIdentier:(id)a2 completion:(id /* block */)a3;
+ (void)_issueAppOffloadPurgeCompetion:(id /* block */)a0 withCompletionQueue:(id)a1 result:(BOOL)a2 spacePurged:(long long)a3 error:(id)a4 releasingTransaction:(id)a5;
+ (void)_issueSpacePurgeableCompetion:(id /* block */)a0 withCompletionQueue:(id)a1 result:(BOOL)a2 spacePurgeable:(long long)a3 error:(id)a4 releasingTransaction:(id)a5;
+ (void)_trackSpaceBegin:(id)a0;
+ (void)_trackSpaceBegin:(id)a0 withIdentifier:(id)a1;
+ (void)_trackSpaceEnd:(id)a0 withIdentifier:(id)a1 withResult:(long long)a2 withError:(id)a3;
+ (void)_trackSpaceEnd:(id)a0 withResult:(long long)a1 withError:(id)a2;
+ (void)cacheDeletePurge:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(int)a2 completion:(id /* block */)a3;
+ (void)cacheDeletePurge:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(int)a2 withCompletionQueue:(id)a3 completion:(id /* block */)a4;
+ (id)cacheDeleteUrgencyName:(int)a0;
+ (void)checkAvailableFreeSpace:(unsigned long long)a0 checkingFromBase:(id)a1 withIdentifier:(id)a2 userInitiated:(BOOL)a3 completion:(id /* block */)a4;
+ (void)checkAvailableSpace:(unsigned long long)a0 allowPurgeWithUrgency:(int)a1 purgingFromBase:(id)a2 minimalRequiredFreeSpace:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)checkAvailableSpace:(unsigned long long)a0 allowPurgeWithUrgency:(int)a1 purgingFromBase:(id)a2 minimalRequiredFreeSpace:(unsigned long long)a3 withCompletionQueue:(id)a4 completion:(id /* block */)a5;
+ (void)checkPurgeableSpaceCacheDelete:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(int)a2 withCompletionQueue:(id)a3 completion:(id /* block */)a4;
+ (void)checkPurgeableSpaceOffloadApps:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(long long)a2 withCompletionQueue:(id)a3 completion:(id /* block */)a4;
+ (void)offloadAppsPurge:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(long long)a2 withCompletionQueue:(id)a3 completion:(id /* block */)a4;
+ (id)sharedSpaceManager;

- (id)init;
- (void).cxx_destruct;

@end
