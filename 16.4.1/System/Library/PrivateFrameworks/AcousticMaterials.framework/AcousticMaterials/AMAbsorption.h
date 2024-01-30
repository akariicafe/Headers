@class NSString, NSArray;

@interface AMAbsorption : NSObject

@property (readonly) NSString *materialName;
@property (readonly) NSString *materialDescription;
@property (readonly) NSArray *frequencyBands;
@property (copy) NSArray *absorptionUserData;
@property (readonly) NSArray *absorptionReferenceData;
@property (readonly) NSArray *uncertaintyReferenceData;
@property (readonly) NSArray *numDataPointsReferenceData;
@property (readonly) int totalNumDataSetsReferenceData;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMaterialName:(id)a0;
- (id)initWithValues:(id)a0 error:(id *)a1;
- (BOOL)validatedWithoutError:(id *)a0;

@end
