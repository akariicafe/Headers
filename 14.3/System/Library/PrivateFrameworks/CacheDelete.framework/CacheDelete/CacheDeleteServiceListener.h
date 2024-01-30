@class CacheDeleteServiceInfo, NSXPCListenerEndpoint, NSObject;
@protocol OS_dispatch_queue;

@interface CacheDeleteServiceListener : CacheDeleteListener <CacheDeleteServiceProtocol>

@property (copy, nonatomic) id /* block */ purgeable;
@property (copy, nonatomic) id /* block */ purge;
@property (copy, nonatomic) id /* block */ periodic;
@property (copy, nonatomic) id /* block */ cancel;
@property (copy, nonatomic) id /* block */ notify;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) BOOL legacyCallbacks;
@property (readonly) BOOL anonymous;
@property (readonly, nonatomic) CacheDeleteServiceInfo *serviceInfo;
@property (readonly) NSXPCListenerEndpoint *endpoint;

+ (id)cacheDeleteServiceListener:(id)a0 options:(id)a1;

- (id)initWithName:(id)a0 options:(id)a1;
- (void)setPurgeable:(id /* block */)a0 purge:(id /* block */)a1 cancel:(id /* block */)a2 periodic:(id /* block */)a3 notify:(id /* block */)a4 callback:(id /* block */)a5 entitlements:(id)a6;
- (void)servicePing:(id /* block */)a0;
- (void)serviceNotify:(id)a0 replyBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)servicePeriodic:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)servicePurgeable:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)serviceCancelPurge:(id /* block */)a0;
- (void)servicePurge:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)setNotifyCallback:(id /* block */)a0;
- (void)serviceCallback:(id)a0 replyBlock:(id /* block */)a1;

@end
