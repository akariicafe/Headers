@class SINetworkConfiguration, NSDictionary;
@protocol SINetworkProtocol;

@interface SIModel : NSObject

@property (retain, nonatomic) id<SINetworkProtocol> network;
@property (retain, nonatomic) SINetworkConfiguration *config;
@property (nonatomic) unsigned long long inferenceSignpostEventStart;
@property (nonatomic) unsigned long long inferenceSignpostEventEnd;
@property (retain) NSDictionary *inputs;
@property (retain) NSDictionary *outputs;

- (void).cxx_destruct;
- (id)getConfiguration;
- (id)networkVersion;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (long long)evaluateWithInput:(id)a0 outputs:(id)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)getOpsForLibrary;
- (id)initWithNetworkConfiguration:(id)a0;
- (BOOL)switchNetworkConfiguration:(long long)a0;

@end
