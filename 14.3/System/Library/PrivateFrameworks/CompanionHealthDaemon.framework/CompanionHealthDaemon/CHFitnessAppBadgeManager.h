@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CHFitnessAppBadgeManager : NSObject {
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_launchFitnessApp;
- (void)requestBadgeUpdate;
- (void)_storeBadgeCount:(long long)a0;
- (void)registerProvider:(id)a0;
- (long long)_badgeCount;
- (long long)_loadBadgeCount;
- (void)unregisterProvider:(id)a0;

@end
