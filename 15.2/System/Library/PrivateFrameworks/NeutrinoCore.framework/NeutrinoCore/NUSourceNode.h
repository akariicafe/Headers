@class NURenderNode;
@protocol NUSourceDerivation;

@interface NUSourceNode : NURenderNode

@property (weak) NURenderNode *originalNode;
@property (retain) id<NUSourceDerivation> sourceDerivation;
@property (readonly) long long sourceOrientation;

- (id)initWithSettings:(id)a0;
- (BOOL)load:(out id *)a0;
- (BOOL)isValid:(out id *)a0;
- (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)sourceOptionsForSettings:(id)a0 error:(out id *)a1;
- (id)preparedNodeWithSourceContainer:(id)a0 pipelineState:(id)a1 pipelineSettings:(id)a2 sourceSettings:(id)a3 error:(out id *)a4;
- (id)_evaluateImageGeometry:(out id *)a0;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)a0 error:(out id *)a1;
- (BOOL)supportsPipelineState:(id)a0 error:(out id *)a1;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateVideoProperties:(out id *)a0;
- (id)_evaluateImage:(out id *)a0;
- (long long)normalizeSubsampleFactor:(long long)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (BOOL)isGeometryNode;
- (id)pipelineOptionsForPipelineState:(id)a0 error:(out id *)a1;
- (id)_addResampleNode:(id)a0 subsampleNode:(id)a1;
- (id)_addScaleNode:(id)a0 pipelineState:(id)a1 pipelineSettings:(id)a2 sourceSettings:(id)a3;
- (id)_addOrientationNode:(id)a0 sourceSettings:(id)a1 error:(out id *)a2;
- (id)preparedNodeWithSourceNode:(id)a0 sourceSettings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)_evaluateGeometrySpaceMap:(out id *)a0;
- (id)_evaluateImageProperties:(out id *)a0;

@end
