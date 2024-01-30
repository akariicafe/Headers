@interface GEORouteHypothesisMonitorTransit : GEORouteHypothesisMonitor

- (id)routeName;
- (void)checkRouteForLocation:(id)a0;
- (void)_recalculateETAWithRouteMatch:(id)a0;

@end
