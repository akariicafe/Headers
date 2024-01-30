@class NSArray, NSString, NSNetService, ICDelegationNetServiceTXTRecord, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICDelegationProviderNetService : NSObject <NSNetServiceDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_netServiceStreamResolutionQueue;
    NSMutableArray *_resolutionCompletionHandlers;
    long long _state;
    ICDelegationNetServiceTXTRecord *_txtRecord;
}

@property (readonly, nonatomic) NSNetService *netService;
@property (readonly, copy, nonatomic) NSArray *delegationAccountUUIDs;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) long long securityMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(long long)a0;
- (id)initWithNetService:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)_resolveWithCompletionHandler:(id /* block */)a0;
- (void)_updateTXTRecordProperties;
- (void)getResolvedStreamsWithCompletionHandler:(id /* block */)a0;

@end
