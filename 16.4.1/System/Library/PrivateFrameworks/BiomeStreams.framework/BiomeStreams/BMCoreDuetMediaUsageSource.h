@protocol BMCoreDuetMediaUsageStore;

@interface BMCoreDuetMediaUsageSource : BMSource

@property (retain, nonatomic) id<BMCoreDuetMediaUsageStore> storage;

- (void)sendEvent:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
