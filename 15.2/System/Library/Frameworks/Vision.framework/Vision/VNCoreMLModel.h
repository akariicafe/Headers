@class MLModel, NSString, MLObjectBoundingBoxOutputDescription;
@protocol NSObject, MLFeatureProvider, NSCopying;

@interface VNCoreMLModel : NSObject <VNSequencedRequestSupporting> {
    NSString *_uuidStringForCacheIdentifier;
}

@property (readonly, copy, nonatomic) id<NSObject, NSCopying> cachingIdentifier;
@property (retain) MLModel *model;
@property int modelType;
@property (retain) NSString *inputImageKey;
@property (retain) NSString *predictedFeatureKey;
@property (readonly) NSString *predictedProbabilitiesKey;
@property (readonly) MLObjectBoundingBoxOutputDescription *boundingBoxOutputDescription;
@property (readonly) unsigned long long inputImageWidth;
@property (readonly) unsigned long long inputImageHeight;
@property (readonly) unsigned int inputImageFormat;
@property (readonly) unsigned long long scenePrintRevision;
@property (retain) NSString *inputScenePrintKey;
@property (readonly) long long inputScenePrintMLMultiArrayDataType;
@property (copy, nonatomic) NSString *inputImageFeatureName;
@property (retain, nonatomic) id<MLFeatureProvider> featureProvider;

+ (id)modelForMLModel:(id)a0 error:(id *)a1;

- (id)sequencedRequestPreviousObservationsKey;
- (void).cxx_destruct;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)setupInputImageFromModelDescription:(id)a0;
- (void)_updateModelWithFlexibleImageConstraintUsingWidth:(long long)a0 height:(long long)a1;
- (id)predictWithCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 error:(id *)a2;
- (id)predictWithScenePrint:(id)a0 options:(id)a1 error:(id *)a2;

@end
