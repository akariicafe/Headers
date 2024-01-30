@class NSSet, NSString, NSDateFormatter, NSHashTable, NSNumber, NSObject;
@protocol SLGDomainWhitelisting, SLGLogClientProtocol, OS_dispatch_queue;

@interface SLGLog : NSObject <SLGLogClientProtocolDelegate, SLGLogging> {
    id<SLGLogClientProtocol> _client;
    id<SLGDomainWhitelisting> _whitelist;
    NSNumber *_pid;
    NSString *_processName;
    NSDateFormatter *_dateFormatter;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerLockQueue;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    BOOL _isEnabled;
}

@property (readonly, copy, nonatomic) NSSet *whitelistedDomains;
@property (nonatomic) BOOL allowUnspecifiedDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)log:(id)a0;
- (void)endSession;
- (void)resetWithCompletion:(id /* block */)a0;
- (BOOL)isEnabled;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (id)init;
- (void)logBlock:(id /* block */)a0 domain:(id)a1;
- (void)reset;
- (void)beginSession;
- (void)logBlock:(id /* block */)a0;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 tags:(id /* block */)a2;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 tags:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithClient:(id)a0 whitelist:(id)a1 enabled:(BOOL)a2;
- (void)_setClient:(id)a0;
- (void)_fetchProcessInfo;
- (void)endSessionAndRenameFileTo:(id)a0 withCompletion:(id /* block */)a1;
- (void)reset:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_serializeObjectAsLogEntry:(id)a0 domain:(id)a1 tags:(id)a2 error:(id *)a3;
- (void)log:(id)a0 domain:(id)a1 tags:(id)a2 completion:(id /* block */)a3;
- (void)beginSessionWithCompletion:(id /* block */)a0;
- (id)_wrapObjectWithEntryMetadata:(id)a0 domain:(id)a1 tags:(id)a2;
- (void)client:(id)a0 didReceiveInitialLogMessageFromDomain:(id)a1;
- (void)clientDidReceiveServerReset:(id)a0;
- (void)log:(id)a0 completion:(id /* block */)a1;
- (void)log:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)log:(id)a0 tags:(id)a1 completion:(id /* block */)a2;
- (void)log:(id)a0 tags:(id)a1;
- (void)log:(id)a0 domain:(id)a1 tags:(id)a2;
- (void)log:(id)a0 domain:(id)a1;
- (void)logBlock:(id /* block */)a0 tags:(id /* block */)a1;
- (void)logBlock:(id /* block */)a0 tags:(id /* block */)a1 completion:(id /* block */)a2;
- (void)logBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)addDomainToWhitelist:(id)a0;
- (void)removeDomainFromWhitelist:(id)a0;

@end
