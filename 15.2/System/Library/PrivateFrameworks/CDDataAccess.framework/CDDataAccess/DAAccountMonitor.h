@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface DAAccountMonitor : NSObject

@property (retain, nonatomic) NSHashTable *accounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accountsQueue;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)init;
- (id)monitoredAccounts;
- (void)unmonitorAccount:(id)a0;
- (void)monitorAccount:(id)a0;

@end
