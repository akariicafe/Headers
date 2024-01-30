@class NSString, BMComputeXPCPublisherClient, NSObject, BMComputeXPCSubscriptionBookmarkStorage;
@protocol OS_dispatch_queue;

@interface BMBiomeScheduler : NSObject <BMDSLScheduler> {
    BMComputeXPCSubscriptionBookmarkStorage *_bookmarkStorage;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMComputeXPCPublisherClient *client;
@property (readonly, nonatomic) BOOL waking;

- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 client:(id)a2 waking:(BOOL)a3;
- (void)_setBookmarkStorage:(id)a0;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 client:(id)a2 waking:(BOOL)a3 storageProvider:(id /* block */)a4;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 client:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)subscribeWithDSLGraph:(id)a0 forSubscriber:(id)a1;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 client:(id)a2 storageProvider:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 waking:(BOOL)a2;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1;

@end
