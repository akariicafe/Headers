@class NSObject, NSSet, NSString, HMDIDSSendMessageOperation, NSMutableSet, HMDAccount, IDSService;
@protocol OS_dispatch_queue;

@interface HMDDeviceDiscoveryOperation : HMFOperation <IDSServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDIDSSendMessageOperation *_operation;
    NSMutableSet *_devices;
}

@property (readonly) IDSService *service;
@property (readonly) HMDAccount *account;
@property (readonly, copy) NSSet *devices;
@property (copy) id /* block */ discoveryBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (double)timeout;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)setQualityOfService:(long long)a0;
- (void).cxx_destruct;
- (void)main;
- (void)cancelWithError:(id)a0;
- (id)initWithAccount:(id)a0;
- (id)initWithAccount:(id)a0 timeout:(double)a1;
- (id)initWithAccount:(id)a0 service:(id)a1 timeout:(double)a2;

@end
