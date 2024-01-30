@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CHStrokeClassificationModel : CHRecurrentNeuralNetwork {
    NSObject<OS_dispatch_queue> *_queue;
    long long _inferenceCount;
}

@property (readonly, nonatomic) void *model;
@property (readonly, nonatomic) NSArray *modelConfigurationsNumStrokes;
@property (readonly, nonatomic) NSArray *modelConfigurationsNumPoints;
@property (readonly, nonatomic) NSString *modelSmallestConfig;
@property (readonly, nonatomic) long long numInputFeatures;
@property (readonly, nonatomic) long long distanceFeatureIndex;
@property (readonly, nonatomic) long long sinAngleFeatureIndex;
@property (readonly, nonatomic) long long cosAngleFeatureIndex;
@property (readonly, nonatomic) long long modelDecoderSize;
@property (readonly, nonatomic) long long maxInputWidth;
@property (readonly, nonatomic) long long minPointsPerStroke;
@property (readonly, nonatomic) long long maxPointsPerStroke;
@property (readonly, nonatomic) long long recognitionMaxStrokes;
@property (readonly, nonatomic) long long contextMaxStrokes;
@property (readonly, nonatomic) long long maxNumberOfInputStrokes;
@property (readonly, nonatomic) double interpointDistance;
@property (readonly, nonatomic) long long numOutputClasses;
@property (readonly, nonatomic) long long textClassIndex;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithModelName:(id)a0;
- (BOOL)_classifyStrokesInDrawing:(id)a0 outTextStrokeProbabilities:(void *)a1 cancellationBlock:(id /* block */)a2;
- (id)_extractFeaturesFromDrawing:(id)a0 numStrokes:(id)a1 numPoints:(id)a2 error:(id *)a3;
- (id)_extractInputMaskFromDrawing:(id)a0 numStrokes:(id)a1 numPoints:(id)a2 error:(id *)a3;
- (id)_getPositionalEncodings:(id)a0 error:(id *)a1;
- (id)_getStringForConfigurationValues:(id)a0 numPoints:(id)a1;
- (BOOL)classifyStrokes:(id)a0 outTextStrokeProbabilities:(void *)a1 cancellationBlock:(id /* block */)a2;
- (id)getModelConfigurationForDrawing:(id)a0 outNumStrokes:(id *)a1 outNumPoints:(id *)a2;
- (id)normalizedDrawing:(id)a0 interpolationDistance:(double)a1;
- (void)reduceMemoryByResizing;

@end
