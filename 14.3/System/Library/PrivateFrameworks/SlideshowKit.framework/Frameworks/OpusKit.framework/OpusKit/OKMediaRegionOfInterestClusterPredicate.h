@interface OKMediaRegionOfInterestClusterPredicate : OKMediaClusterPredicate

- (id)init;
- (void)dealloc;
- (id)title;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (float)efficiencyForItems:(id)a0;

@end
