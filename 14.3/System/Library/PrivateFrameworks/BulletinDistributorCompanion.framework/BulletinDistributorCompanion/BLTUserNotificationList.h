@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BLTUserNotificationList : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)_queue_invalidatedConnection;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_interruptedConnection;
- (void)_invalidate;
- (void)_queue_ensureConnection;
- (void)isNotificationImminentWithPublisherBulletinID:(id)a0 sectionID:(id)a1 completion:(id /* block */)a2;

@end
