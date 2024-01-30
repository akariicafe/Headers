@class DRSConfigPersistedStore, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface DRSTaskingEventPublisher : NSObject

@property (readonly, nonatomic) NSMutableSet *subscribers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_event_publisher> *publisher;
@property (readonly, nonatomic) DRSConfigPersistedStore *configStore;

+ (BOOL)_isFirst;

- (void)_publishNotification:(id)a0 config:(id)a1;
- (id)_activeConfigForTeamID:(id)a0 errorOut:(id *)a1;
- (void)_addSubscriber:(unsigned long long)a0 descriptor:(id)a1 isOldSubscriber:(BOOL)a2;
- (void)_removeSubscriber:(unsigned long long)a0;
- (void)publishConfigUpdateForTeamID:(id)a0 state:(unsigned char)a1 config:(id)a2;
- (void)publishCurrentConfigForTeamID:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigStore:(id)a0;

@end
