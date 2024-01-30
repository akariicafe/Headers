@class NSArray, PHASESpatialPipeline, PHASEDirectivityModelParameters, PHASEDistanceModelParameters;

@interface PHASESpatialMixerDefinition : PHASEMixerDefinition

@property (nonatomic) double listenerDopplerFactor;
@property (nonatomic) double sourceDopplerFactor;
@property (readonly, nonatomic) NSArray *spatialModelerDefinitions;
@property (readonly, nonatomic) PHASESpatialPipeline *spatialPipeline;
@property (retain, nonatomic) PHASEDistanceModelParameters *distanceModelParameters;
@property (retain, nonatomic) PHASEDirectivityModelParameters *listenerDirectivityModelParameters;
@property (retain, nonatomic) PHASEDirectivityModelParameters *sourceDirectivityModelParameters;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSpatialPipeline:(id)a0;
- (id)initWithSpatialModelerSendDefinitions:(id)a0;
- (id)initWithSpatialPipeline:(id)a0 identifier:(id)a1;
- (id)initWithSpatialModelerSendDefinitions:(id)a0 uid:(id)a1;
- (id)initWithSpatialPipeline:(id)a0 uid:(id)a1;

@end
