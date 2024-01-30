@class NSArray, NSDictionary;

@interface VNANFDMultiDetectorANODv4 : VNANFDMultiDetectorANODv3

@property (class, readonly) NSArray *knownAnimalHeadIdentifiers;
@property (class, readonly) NSDictionary *recognizedAnimalHeadObjectClassToAnimalHeadCategoryName;
@property (class, readonly) NSArray *knownSportBallIdentifiers;
@property (class, readonly) NSDictionary *recognizedSportBallObjectClassToSportBallCategoryName;

+ (Class)detectorClass;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (id)detectedObjectClassToRequestKey;

- (BOOL)processDetectedObject:(id)a0 originatingRequestSpecifier:(id)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageBuffer:(id)a3 warningRecorder:(id)a4 detectedObjectResults:(id)a5 error:(id *)a6;
- (BOOL)updateRuntimeParametersFromOptions:(id)a0 error:(id *)a1;

@end
