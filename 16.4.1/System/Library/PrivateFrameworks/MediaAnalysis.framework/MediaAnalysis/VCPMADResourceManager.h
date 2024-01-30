@class NSObject, NSDate, VCPTimer, NSMutableArray;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface VCPMADResourceManager : NSObject {
    long long _budget;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_resources;
    VCPTimer *_timer;
    NSDate *_inactiveDate;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reserveBudget:(long long)a0;
- (void)_purgeAllResources;
- (void)_setBudget:(long long)a0;
- (id)activateResource:(id)a0;
- (void)checkTimeout;
- (long long)currentBudget;
- (void)deactivateResource:(id)a0;
- (id)entryForResource:(id)a0;
- (void)purgeAllResources;
- (void)purgeInactiveResources;
- (void)reserveBudget:(long long)a0;
- (long long)validateCost:(long long)a0;

@end
