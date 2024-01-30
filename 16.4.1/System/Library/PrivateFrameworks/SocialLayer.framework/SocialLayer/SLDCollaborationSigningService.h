@class SLPersonIdentityGenerator, NSString, SLDTaskManager, NSObject;
@protocol OS_dispatch_queue;

@interface SLDCollaborationSigningService : NSObject <SLDService, SLDCollaborationSigningService>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue;
@property (retain, nonatomic) SLDTaskManager *taskManager;
@property (readonly, nonatomic) SLPersonIdentityGenerator *personIdentityGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsConnection:(id)a0;
- (id)signData:(id)a0 forCollaborationIdentifier:(id)a1 trackingPreventionSalt:(id)a2 reply:(id /* block */)a3;
- (id)signSourceProcessWithMetadata:(id)a0 reply:(id /* block */)a1;

@end
