@class NSString, IDSService;
@protocol HDSPIDSServiceDelegate, HKSPQueueBackedScheduler;

@interface _HDSPIDSService : NSObject <HDSPIDSService, IDSServiceDelegate> {
    IDSService *_service;
    id<HKSPQueueBackedScheduler> _scheduler;
}

@property (weak, nonatomic) id<HDSPIDSServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initWithScheduler:(id)a0;
- (void)_sendSerializedMessage:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (id)_localDestinations;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;

@end
