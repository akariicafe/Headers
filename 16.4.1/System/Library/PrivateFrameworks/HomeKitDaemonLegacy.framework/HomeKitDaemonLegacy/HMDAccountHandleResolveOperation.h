@class HMDIDSMessageContext, NSString, HMDAccountHandle, NSMutableArray;
@protocol HMDIDSService;

@interface HMDAccountHandleResolveOperation : HMFOperation <HMFLogging, HMDIDSServiceDelegate>

@property (readonly) id<HMDIDSService> service;
@property (retain, nonatomic) HMDIDSMessageContext *messageContext;
@property (readonly) NSMutableArray *resolveBlocks;
@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timeout;
+ (id)logCategory;

- (id)initWithHandle:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (id)logIdentifier;
- (void)main;
- (id)initWithTimeout:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addResolveBlock:(id /* block */)a0;
- (id)initWithQualityOfService:(long long)a0 timeout:(double)a1;

@end
