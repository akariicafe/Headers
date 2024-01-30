@interface RTSettledStateTransitionStore : RTStore

- (void)clearWithHandler:(id /* block */)a0;
- (void)_purgeSettledStateTransitionsPredating:(id)a0 handler:(id /* block */)a1;
- (void)enumerateStoredSettledStateTransitionsWithOptions:(id)a0 enumerationBlock:(id /* block */)a1;
- (void)purgeSettledStateTransitionsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeSettledStateTransitions:(id)a0 handler:(id /* block */)a1;

@end
