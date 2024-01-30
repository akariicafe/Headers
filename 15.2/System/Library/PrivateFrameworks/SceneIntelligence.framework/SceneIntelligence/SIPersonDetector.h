@interface SIPersonDetector : SIBaseNetwork

- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithComputeEngine:(long long)a0 networkMode:(long long)a1;
- (id)_configurationToString:(long long)a0;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)initWithComputeEngine:(long long)a0;
- (void)preSetup;
- (BOOL)switchNetworkConfiguration:(long long)a0;
- (long long)evaluateImage:(struct __CVBuffer { } *)a0;
- (void)postSetup;
- (long long)copyOutput:(id)a0;

@end
