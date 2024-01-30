@class NSString, NSArray, IDSService, NSObject, NSMutableArray, NSMutableSet, HMDBackingStore, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMDRemoteAccountManager : HMFObject <HMDAccountManager, HMFLogging, HMFObject, IDSServiceDelegate, NSFastEnumeration> {
    NSObject<OS_dispatch_queue> *_queue;
    HMFUnfairLock *_lock;
    NSMutableSet *_accounts;
}

@property (readonly, nonatomic) IDSService *service;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (readonly, nonatomic) NSMutableArray *resolveOperations;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) HMDBackingStore *backingStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)sharedManager;

- (void)addAccount:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithIDSService:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)accountForHandle:(id)a0;
- (void)stop;
- (void)removeAccount:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)start;
- (id)accountForIdentifier:(id)a0;
- (void)_resolveAccountForHandle:(id)a0 completionHandler:(id /* block */)a1;
- (id)deviceForSenderContext:(id)a0;
- (void)__handleSendMessageFailureWithError:(id)a0 destination:(id)a1;
- (id)accountForSenderContext:(id)a0;
- (BOOL)shouldCacheAccount:(id)a0;
- (BOOL)shouldSyncAccount:(id)a0;
- (BOOL)shouldSyncDevice:(id)a0;
- (BOOL)shouldAccount:(id)a0 pushbackModel:(id)a1 actions:(id)a2;
- (BOOL)shouldDevice:(id)a0 processModel:(id)a1 actions:(id)a2;
- (void)processAccountModel:(id)a0 message:(id)a1;
- (void)processAccountModelRemove:(id)a0 message:(id)a1;
- (id)accountForModelIdentifier:(id)a0;

@end
