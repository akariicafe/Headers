@class NSString;
@protocol BLSHIndividualSystemActivityAssertionAggregator;

@interface BLSHIndividualSystemActivityAssertion : NSObject <BLSHSystemActivityAsserting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BLSHIndividualSystemActivityAssertionAggregator> _lock_aggregator;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acquireWithTimeout:(double)a0 handler:(id /* block */)a1;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithWithIdentifier:(id)a0 aggregator:(id)a1;

@end
