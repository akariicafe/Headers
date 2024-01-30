@class DNDSModeAssertionUpdateResult, NSString, DNDSClientDetailsProvider, DNDSModeAssertionStore;

@interface DNDSModeAssertionManagerUpdateContext : NSObject <DNDSModeAssertionUpdateContext> {
    DNDSClientDetailsProvider *_clientDetailsProvider;
}

@property (readonly, copy, nonatomic) DNDSModeAssertionStore *store;
@property (readonly, copy, nonatomic) DNDSModeAssertionUpdateResult *updateResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_resolveStore:(inout id)a0;
- (id)initWithStore:(id)a0 clientDetailsProvider:(id)a1;
- (id)invalidateAssertionsForRequest:(id)a0;
- (void)_cleanupStore:(inout id)a0;
- (id)modeAssertionsMatchingPredicate:(id)a0;
- (id)takeAssertionWithDetails:(id)a0 source:(id)a1 startDate:(id)a2;
- (id)takeAssertionWithUUID:(id)a0 details:(id)a1 source:(id)a2 startDate:(id)a3;
- (id)_calculateUpdateResultForStore:(id)a0 previousStore:(id)a1;
- (void).cxx_destruct;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)a0;

@end
