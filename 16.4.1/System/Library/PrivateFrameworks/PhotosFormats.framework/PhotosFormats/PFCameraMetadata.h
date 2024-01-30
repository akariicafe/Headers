@class VNSaliencyImageObservation, NSArray, NSDictionary, NSString, VNImageAestheticsObservation, VNSceneObservation, NSData;

@interface PFCameraMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *junkImageClassificationObservations;
@property (readonly, nonatomic) VNImageAestheticsObservation *imageAestheticsObservation;
@property (readonly, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property (readonly, nonatomic) VNSceneObservation *scenePrintObservation;
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
@property (readonly, nonatomic) NSArray *torsoprints;
@property (readonly, nonatomic) NSArray *foodAndDrinkObservations;
@property (nonatomic) long long semanticEnhanceScene;
@property (nonatomic) double semanticEnhanceSceneConfidence;
@property (readonly, nonatomic) NSString *captureFolderPath;
@property (readonly, nonatomic) NSArray *contactIDsInProximity;
@property (readonly, nonatomic) long long sharedLibraryMode;
@property (readonly) NSData *JSONDebugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpatialOverCapturePrivateClientMetadata:(id)a0;
- (id)initWithJunkImageClassificationObservations:(id)a0 imageAestheticsObservation:(id)a1 saliencyObservation:(id)a2 scenePrintObservation:(id)a3 detectedObjectsInfoHumanFaces:(id)a4 detectedObjectsInfoHumanBodies:(id)a5 detectedObjectsInfoCatBodies:(id)a6 detectedObjectsInfoDogBodies:(id)a7 detectedObjectsSalientObjects:(id)a8 smartCamInfo:(id)a9 stitchConfidence:(unsigned long long)a10 horizonLinePresent:(BOOL)a11 horizonLineAngleInDegrees:(float)a12 captureFolderPath:(id)a13 semanticDevelopmentGatingObservations:(id)a14 faceObservations:(id)a15 torsoprints:(id)a16 foodAndDrinkObservations:(id)a17 semanticEnhanceScene:(long long)a18 contactIDsInProximity:(id)a19 sharedLibraryMode:(long long)a20;
- (void).cxx_destruct;

@end
