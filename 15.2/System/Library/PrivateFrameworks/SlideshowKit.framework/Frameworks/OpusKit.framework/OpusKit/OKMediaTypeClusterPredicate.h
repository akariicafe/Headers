@interface OKMediaTypeClusterPredicate : OKMediaClusterPredicate

- (id)title;
- (id)init;
- (void)dealloc;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (float)efficiencyForItems:(id)a0;

@end
