@interface PITimeVaryingPipelineStateSetting : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } rawTime;
@property (nonatomic) long long sampleMode;

- (id)nu_evaluateWithPipelineState:(id)a0 error:(out id *)a1;

@end
