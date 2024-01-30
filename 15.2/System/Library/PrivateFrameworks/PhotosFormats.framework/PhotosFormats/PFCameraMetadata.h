@class VNSaliencyImageObservation, NSArray, NSDictionary, NSString, VNImageAestheticsObservation, VNSceneObservation, NSData;

@interface PFCameraMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *junkImageClassificationObservations;
@property (readonly, nonatomic) VNImageAestheticsObservation *imageAestheticsObservation;
@property (readonly, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property (readonly, nonatomic) VNSceneObservation *scenePrintObservation;
@property (readonly, nonatomic) VNSceneObservation *compressedScenePrintObservation;
@property (readonly, nonatomic) NSDictionary *smartCamInfo;
@property (readonly, nonatomic) NSArray *detectedHumanFaces;
@property (readonly, nonatomic) NSArray *detectedHumanBodies;
@property (readonly, nonatomic) NSArray *detectedCatBodies;
@property (readonly, nonatomic) NSArray *detectedDogBodies;
@property (readonly, nonatomic) NSArray *detectedSalientObjects;
@property (readonly, nonatomic) unsigned long long stitchConfidence;
@property (readonly, nonatomic) BOOL horizonLinePresent;
@property (readonly, nonatomic) float horizonLineAngleInDegrees;
@property (readonly, nonatomic) NSArray *semanticDevelopmentGatingObservations;
@property (readonly, nonatomic) NSArray *faceObservations;
@property (readonly, nonatomic) NSArray *foodAndDrinkObservations;
@property (nonatomic) long long semanticEnhanceScene;
@property (nonatomic) double semanticEnhanceSceneConfidence;
@property (readonly, nonatomic) NSString *captureFolderPath;
@property (readonly) NSData *JSONDebugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSpatialOverCapturePrivateClientMetadata:(id)a0;
- (id)initWithJunkImageClassificationObservations:(id)a0 imageAestheticsObservation:(id)a1 saliencyObservation:(id)a2 scenePrintObservation:(id)a3 compressedScenePrintObservation:(id)a4 detectedObjectsInfoHumanFaces:(id)a5 detectedObjectsInfoHumanBodies:(id)a6 detectedObjectsInfoCatBodies:(id)a7 detectedObjectsInfoDogBodies:(id)a8 detectedObjectsSalientObjects:(id)a9 smartCamInfo:(id)a10 stitchConfidence:(unsigned long long)a11 horizonLinePresent:(BOOL)a12 horizonLineAngleInDegrees:(float)a13 captureFolderPath:(id)a14 semanticDevelopmentGatingObservations:(id)a15 faceObservations:(id)a16 foodAndDrinkObservations:(id)a17 semanticEnhanceScene:(long long)a18;

@end
