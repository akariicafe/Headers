@class NSString, NSHashTable, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface SCLTransportService : NSObject <IDSServiceDelegate, IDSServiceDelegatePrivate>

@property (readonly, nonatomic) NSHashTable *transportControllers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) IDSService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 fromID:(id)a3 hasBeenDeliveredWithContext:(id)a4;
- (void)start;
- (void).cxx_destruct;
- (void)addTransportController:(id)a0;
- (id)initWithTargetQueue:(id)a0 service:(id)a1;
- (void)removeTransportController:(id)a0;
- (BOOL)sendProtobuf:(id)a0 toDevice:(id)a1 options:(id)a2 identifier:(id *)a3 error:(id *)a4;
- (id)transportControllerForDevice:(id)a0;

@end
