@class NSArray, NSDictionary;

@interface VNANFDMultiDetectorANODv3 : VNANFDMultiDetector

@property (class, readonly) NSArray *knownFoodAndDrinkIdentifiers;
@property (class, readonly) NSDictionary *recognizedFoodAndDrinkObjectClassToFoodAndDrinkCategoryName;

+ (Class)detectorClass;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (id)detectedObjectClassToRequestKey;
+ (BOOL)shouldAlignFacesForRequestWithSpecifier:(id)a0;

- (BOOL)processDetectedObject:(id)a0 originatingRequestSpecifier:(id)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageBuffer:(id)a3 qosClass:(unsigned int)a4 warningRecorder:(id)a5 detectedObjectResults:(id)a6 error:(id *)a7;
- (id)splitDetectedClassResultsIntoSubclasses:(id)a0;
- (BOOL)updateRuntimeParametersFromOptions:(id)a0 error:(id *)a1;

@end
