@interface SUICHandsOnAutoDismissalStrategy : SUICAutoDismissalStrategy {
    id /* block */ _mapsNavigationStatusIsActiveBlock;
}

- (BOOL)shouldDismiss;
- (void).cxx_destruct;
- (id /* block */)_mapsNavigationStatusIsActiveBlock;
- (void)_setMapsNavigationStatusIsActiveBlock:(id /* block */)a0;
- (double)idleTimeInterval;

@end
