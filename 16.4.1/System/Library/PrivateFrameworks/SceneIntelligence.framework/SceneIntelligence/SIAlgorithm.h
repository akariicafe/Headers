@class SIModel, SINetworkConfiguration;

@interface SIAlgorithm : NSObject

@property (readonly) SIModel *model;
@property (retain) SINetworkConfiguration *networkConfiguration;
@property (nonatomic) unsigned long long algorithmNameHash;
@property (nonatomic) unsigned long long mappingId;
@property (nonatomic) unsigned long long frameBoundarySignpostEventStart;
@property (nonatomic) unsigned long long frameBoundarySignpostEventEnd;

+ (BOOL)supportsANE;
+ (Class)outputDataClass;
+ (Class)inputDataClass;

- (void).cxx_destruct;
- (id)networkVersion;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (long long)runWithInput:(id)a0 output:(id)a1;
- (long long)_inferenceWithInput:(id)a0 output:(id)a1;
- (long long)_postprocessingOutput:(id)a0;
- (long long)_preprocessingInputData:(id)a0;
- (long long)_runWithInput:(id)a0 output:(id)a1;
- (long long)_switchConfiguration:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)initWithNetworkConfiguration:(id)a0;
- (long long)runWithInput:(id)a0 output:(id)a1 resolutionConfiguration:(long long)a2;

@end
