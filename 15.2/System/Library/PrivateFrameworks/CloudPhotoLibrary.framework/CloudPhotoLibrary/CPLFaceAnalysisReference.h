@class NSArray;

@interface CPLFaceAnalysisReference : CPLFaceAnalysis

@property (copy, nonatomic) NSArray *faces;

- (void)addFaces:(id)a0;
- (void)addFace:(id)a0;

@end
