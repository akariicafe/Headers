@class NSString, NSHashTable;
@protocol BLSHOSInterfaceProviding, BLSHSystemActivityAsserting, SWSystemActivityAcquisitionDetails;

@interface BLSHAggregateSystemActivityAssertion : NSObject <BLSHIndividualSystemActivityAssertionAggregator> {
    id<BLSHOSInterfaceProviding> _osInterfaceProvider;
    id<BLSHSystemActivityAsserting> _lock_systemActivityAssertion;
    id<SWSystemActivityAcquisitionDetails> _lock_systemActivityAcquisitionDetails;
    NSHashTable *_lock_individualAssertions;
    id /* block */ _lock_acquisitionHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOSInterfaceProvider:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_lock_addSystemActivityAcquisitionHandler:(id /* block */)a0;
- (void)acquireIndividualAssertion:(id)a0 handler:(id /* block */)a1;
- (void)didAcquireSystemActivityIsActive:(BOOL)a0 error:(id)a1 details:(id)a2;
- (void)invalidateIndividualAssertion:(id)a0;

@end
