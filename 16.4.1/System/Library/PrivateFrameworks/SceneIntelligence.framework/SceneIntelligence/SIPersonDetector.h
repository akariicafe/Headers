@class SIPersonDetectorNetworkConfiguration;
@protocol SINetworkProtocol;

@interface SIPersonDetector : NSObject {
    id<SINetworkProtocol> _personDetectorNetwork;
    SIPersonDetectorNetworkConfiguration *_configuration;
}

- (void).cxx_destruct;
- (id)getConfiguration;
- (id)networkVersion;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (long long)copyOutput:(id)a0;
- (long long)evaluateImage:(struct __CVBuffer { } *)a0;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)initWithNetworkConfiguration:(id)a0;
- (BOOL)switchNetworkConfiguration:(long long)a0;

@end
