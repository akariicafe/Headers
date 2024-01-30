@class NSArray, NSDictionary;

@interface VNANFDMultiDetectorANODv3 : VNANFDMultiDetector

@property (class, readonly) NSArray *knownFoodAndDrinkIdentifiers;
@property (class, readonly) NSDictionary *recognizedFoodAndDrinkObjectClassToFoodAndDrinkCategoryName;

+ (Class)detectorClass;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (id)detectedObjectClassToRequestKey;

- (BOOL)processDetectedObject:(id)a0 originatingRequestSpecifier:(id)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageBuffer:(id)a3 warningRecorder:(id)a4 detectedObjectResults:(id)a5 error:(id *)a6;
- (BOOL)updateRuntimeParametersFromOptions:(id)a0 error:(id *)a1;

@end
