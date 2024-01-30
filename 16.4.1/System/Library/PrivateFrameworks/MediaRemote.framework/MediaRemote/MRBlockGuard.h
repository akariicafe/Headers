@interface MRBlockGuard : MSVBlockGuard

- (id)initWithTimeout:(double)a0 reason:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)initWithTimeout:(double)a0 reason:(id)a1 handler:(id /* block */)a2;

@end
