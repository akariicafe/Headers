@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSNetService, NSMutableArray, NSObject, HMFNetAddress;
@protocol OS_dispatch_queue, HMFNetServiceDelegate;

@interface HMFNetService : HMFObject <HMFLogging, NSNetServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _port;
    NSArray *_addresses;
    NSMutableDictionary *_TXTRecord;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSMutableArray *resolveBlocks;
@property (nonatomic) long long resolveState;
@property (nonatomic) long long resolveRunningState;
@property (readonly, nonatomic) NSNetService *internal;
@property (getter=isPublishing) BOOL publishing;
@property (weak) id<HMFNetServiceDelegate> delegate;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long port;
@property (readonly, getter=isResolved) BOOL resolved;
@property (readonly, copy) HMFNetAddress *hostName;
@property (readonly, copy) NSArray *addresses;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSDictionary *TXTRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)logCategory;
+ (id)errorFromNetServiceErrorDict:(id)a0;

- (id)initWithNetService:(id)a0;
- (void)setHostname:(id)a0;
- (id)logIdentifier;
- (id)shortDescription;
- (void)startMonitoring;
- (void)dealloc;
- (void)setResolved:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 type:(id)a1 name:(id)a2;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netServiceDidStop:(id)a0;
- (void)netServiceWillResolve:(id)a0;
- (void)setAddresses:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)_reallyResolveWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (id)bestAddress;
- (void)confirmWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)notifyUpdatedAddresses:(id)a0;
- (void)removeAllTXTRecordObjects;
- (void)resolveWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)setTXTRecord:(id)a0;
- (void)updateTXTRecordWithData:(id)a0;

@end
