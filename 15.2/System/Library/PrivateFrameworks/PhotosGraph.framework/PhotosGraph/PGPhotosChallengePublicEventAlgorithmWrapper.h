@class PGGraph, PHPhotoLibrary;

@interface PGPhotosChallengePublicEventAlgorithmWrapper : NSObject

@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithEvaluationContext:(id)a0;
- (unsigned short)predictedQuestionStateForAssetUUID:(id)a0 publicEventMUID:(unsigned long long)a1;

@end
