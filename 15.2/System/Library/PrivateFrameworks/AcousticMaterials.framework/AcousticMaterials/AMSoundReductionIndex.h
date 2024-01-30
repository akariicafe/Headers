@class NSString, NSNumber, NSArray;

@interface AMSoundReductionIndex : NSObject

@property (readonly) NSString *materialName;
@property (readonly) NSString *materialDescription;
@property (readonly) NSNumber *materialDepth;
@property (readonly) NSNumber *uncertaintyMaterialDepth;
@property (readonly) NSArray *frequencyBands;
@property (copy) NSArray *soundReductionIndexUserData;
@property (readonly) NSArray *soundReductionIndexReferenceData;
@property (readonly) NSArray *uncertaintyReferenceData;
@property (readonly) NSNumber *averageSoundReductionIndex;
@property (readonly) NSArray *numDataPointsReferenceData;
@property (readonly) int totalNumDataSetsReferenceData;

+ (id)defaultMaterialSoundReductionIndex;

- (void).cxx_destruct;
- (BOOL)validatedWithoutError:(id *)a0;
- (id)initWithName:(id)a0 inBundle:(id)a1 error:(id *)a2;
- (id)initWithValues:(id)a0 error:(id *)a1;

@end
