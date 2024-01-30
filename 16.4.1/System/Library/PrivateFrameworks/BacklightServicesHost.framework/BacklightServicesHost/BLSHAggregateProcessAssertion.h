@class BLSHDurationCalculator, NSString, NSMapTable, RBSProcessIdentity, BLSHAggregatedProcessAssertion, RBSAssertion;

@interface BLSHAggregateProcessAssertion : NSObject <BSInvalidatable> {
    NSMapTable *_lock_aggregated;
    RBSAssertion *_lock_rbsAssertion;
    BLSHAggregatedProcessAssertion *_lock_acquiredAssertion;
    BLSHDurationCalculator *_lock_durationCalculator;
    BOOL _lock_invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _stateHandler;
    double _initTimestamp;
}

@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)acquireAggregatedAssertion:(id)a0 completion:(id /* block */)a1;
+ (id)classLock_aggregateForProcessIdentity:(id)a0 shouldCreate:(BOOL)a1;
+ (void)invalidateAggregatedAssertion:(id)a0;

- (void)acquireAggregatedAssertion:(id)a0 completion:(id /* block */)a1;
- (BOOL)invalidateAggregatedAssertion:(id)a0;
- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)invalidate;
- (id)initWithProcessIdentity:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCurrentRBSAssertion:(id)a0;

@end
