@interface OKMediaLocationClusterPredicate : OKMediaClusterPredicate

@property (readonly) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (id)title;
- (float)efficiencyForItems:(id)a0;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;

@end
