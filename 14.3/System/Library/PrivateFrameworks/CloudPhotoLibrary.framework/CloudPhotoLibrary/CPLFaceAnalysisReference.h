@class NSArray;

@interface CPLFaceAnalysisReference : CPLFaceAnalysis

@property (copy, nonatomic) NSArray *faces;

- (void)addFace:(id)a0;
- (void)addFaces:(id)a0;

@end
