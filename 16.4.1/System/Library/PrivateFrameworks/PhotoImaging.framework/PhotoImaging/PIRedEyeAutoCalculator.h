@interface PIRedEyeAutoCalculator : NUAutoCalculator

@property BOOL force;

- (void)submit:(id /* block */)a0;
- (id)_options;
- (void)_configureRequest:(id)a0;

@end
