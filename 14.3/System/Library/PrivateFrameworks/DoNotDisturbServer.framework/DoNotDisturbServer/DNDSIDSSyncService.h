@class NSString, IDSService, NSObject;
@protocol DNDSSyncServiceDelegate, OS_dispatch_queue;

@interface DNDSIDSSyncService : NSObject <IDSServiceDelegate, DNDSSyncService> {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_syncService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSSyncServiceDelegate> delegate;

- (void)_queue_resume;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initWithIDSService:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)resume;
- (void)sendMessage:(id)a0 withVersionNumber:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_queue_sendMessage:(id)a0 withVersionNumber:(unsigned long long)a1 error:(id *)a2;
- (void)_queue_handleIncomingMessage:(id)a0 deviceIdentifier:(id)a1;

@end
