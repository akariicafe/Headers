@class PHPhotoLibrary, PGGraph;

@interface PGPhotosChallengeMeaningAlgorithmWrapper : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PGGraph *graph;

- (void).cxx_destruct;
- (id)initWithEvaluationContext:(id)a0;
- (id)debugInformationForMeaningIdentifier:(id)a0 assetUUID:(id)a1;
- (unsigned short)predictQuestionStateForMeaningIdentifier:(id)a0 assetUUID:(id)a1;

@end
