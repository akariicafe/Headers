@class SLRemoteTaskManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SLCollaborationSigningController : SLDServiceProxy <SLRemoteTaskManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetSerialQueue;
@property (retain, nonatomic) SLRemoteTaskManager *taskManager;
@property (nonatomic) BOOL synchronous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTargetSerialQueue:(id)a0 synchronous:(BOOL)a1;
- (void)signSourceProcessWithMetadata:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)signData:(id)a0 forCollaborationIdentifier:(id)a1 trackingPreventionSalt:(id)a2 timeout:(double)a3 completion:(id /* block */)a4;
- (id)taskServiceWithErrorHandler:(id /* block */)a0;

@end
