@class PGGraph, PHPhotoLibrary;

@interface PGPhotosChallengeHolidayAlgorithmWrapper : NSObject

@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)debugInformationForHolidayName:(id)a0 assetUUID:(id)a1;
- (id)initWithEvaluationContext:(id)a0;
- (unsigned short)predictedQuestionStateForAssetUUID:(id)a0 holidayName:(id)a1;

@end
