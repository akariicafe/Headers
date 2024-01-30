@interface OKMediaLocationClusterPredicate : OKMediaClusterPredicate

@property (readonly) unsigned long long type;

- (id)title;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (float)efficiencyForItems:(id)a0;

@end
