@class HMDIDSMessageContext, NSString, HMDAccountHandle, NSMutableArray, IDSService;

@interface HMDAccountHandleResolveOperation : HMFOperation <HMFLogging, IDSServiceDelegate>

@property (readonly) IDSService *service;
@property (retain, nonatomic) HMDIDSMessageContext *messageContext;
@property (readonly) NSMutableArray *resolveBlocks;
@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (double)timeout;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initWithHandle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;
- (void)main;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)addResolveBlock:(id /* block */)a0;

@end
