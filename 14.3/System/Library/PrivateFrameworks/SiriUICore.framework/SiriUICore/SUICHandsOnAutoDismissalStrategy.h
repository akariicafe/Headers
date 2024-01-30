@interface SUICHandsOnAutoDismissalStrategy : SUICAutoDismissalStrategy {
    id /* block */ _mapsNavigationStatusIsActiveBlock;
}

- (void).cxx_destruct;
- (BOOL)shouldDismiss;
- (double)idleTimeInterval;
- (id /* block */)_mapsNavigationStatusIsActiveBlock;
- (void)_setMapsNavigationStatusIsActiveBlock:(id /* block */)a0;

@end
