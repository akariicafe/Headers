@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CHFitnessAppBadgeManager : NSObject {
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void)_launchFitnessApp;
- (void)unregisterProvider:(id)a0;
- (void)requestBadgeUpdate;
- (long long)_badgeCount;
- (void)_storeBadgeCount:(long long)a0;
- (void)registerProvider:(id)a0;
- (id)init;
- (long long)_loadBadgeCount;
- (void).cxx_destruct;

@end
