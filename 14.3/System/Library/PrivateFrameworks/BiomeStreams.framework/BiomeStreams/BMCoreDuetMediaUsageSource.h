@protocol BMCoreDuetMediaUsageStore;

@interface BMCoreDuetMediaUsageSource : BMSource

@property (retain, nonatomic) id<BMCoreDuetMediaUsageStore> storage;

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
