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
@property (nonatomic) long long state;
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

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)shortDescription;
+ (id)errorFromNetServiceErrorDict:(id)a0;

- (id)descriptionWithPointer:(BOOL)a0;
- (void)startMonitoring;
- (id)initWithNetService:(id)a0;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setAddresses:(id)a0;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)setHostname:(id)a0;
- (id)initWithDomain:(id)a0 type:(id)a1 name:(id)a2;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceWillResolve:(id)a0;
- (void)dealloc;
- (void)netServiceDidStop:(id)a0;
- (id)shortDescription;
- (void)setResolved:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (void)confirmWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)resolveWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)updateTXTRecordWithData:(id)a0;
- (void)notifyUpdatedAddresses:(id)a0;
- (void)setTXTRecord:(id)a0;
- (void)removeAllTXTRecordObjects;
- (id)bestAddress;
- (void)_reallyResolveWithTimeout:(double)a0 completionHandler:(id /* block */)a1;

@end
