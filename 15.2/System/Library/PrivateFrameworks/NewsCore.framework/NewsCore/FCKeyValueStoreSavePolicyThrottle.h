@interface FCKeyValueStoreSavePolicyThrottle : FCKeyValueStoreSavePolicy {
    double _delay;
}

- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;
- (id)initWithDelay:(double)a0;

@end
