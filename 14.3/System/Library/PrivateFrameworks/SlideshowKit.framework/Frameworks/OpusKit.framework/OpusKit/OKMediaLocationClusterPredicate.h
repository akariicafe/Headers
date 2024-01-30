@interface OKMediaLocationClusterPredicate : OKMediaClusterPredicate

@property (readonly) unsigned long long type;

- (void)dealloc;
- (id)initWithType:(unsigned long long)a0;
- (id)title;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (float)efficiencyForItems:(id)a0;

@end
