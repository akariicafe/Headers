@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate

@property (readonly) double distance;

- (id)title;
- (void)dealloc;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (float)efficiencyForItems:(id)a0;
- (id)_containsInSet:(id)a0 withinItems:(id)a1 distance:(double)a2;
- (id)_titleWithPlacemark:(id)a0;
- (id)initWithDistance:(double)a0;

@end
