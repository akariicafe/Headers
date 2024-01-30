@class NSString, NSArray;

@interface AMScattering : NSObject

@property (readonly) NSString *materialName;
@property (readonly) NSString *materialDescription;
@property (readonly) NSArray *frequencyBands;
@property (copy) NSArray *scatteringUserData;
@property (readonly) NSArray *scatteringReferenceData;
@property (readonly) NSArray *uncertaintyReferenceData;
@property (readonly) NSArray *numDataPointsReferenceData;
@property (readonly) int totalNumDataSetsReferenceData;

+ (id)defaultMaterialScattering;

- (void).cxx_destruct;
- (BOOL)validatedWithoutError:(id *)a0;
- (id)initWithName:(id)a0 inBundle:(id)a1 error:(id *)a2;
- (id)initWithValues:(id)a0 error:(id *)a1;

@end
