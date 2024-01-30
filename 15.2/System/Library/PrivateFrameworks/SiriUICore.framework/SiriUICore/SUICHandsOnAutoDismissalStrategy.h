@interface SUICHandsOnAutoDismissalStrategy : SUICAutoDismissalStrategy {
    id /* block */ _mapsNavigationStatusIsActiveBlock;
}

- (BOOL)shouldDismiss;
- (void).cxx_destruct;
- (double)idleTimeInterval;
- (id /* block */)_mapsNavigationStatusIsActiveBlock;
- (void)_setMapsNavigationStatusIsActiveBlock:(id /* block */)a0;

@end
