@class PVContext;

@interface VCPFaceMerger : NSObject {
    PVContext *_context;
}

+ (BOOL)_allowANE;

- (id)initWithContext:(id)a0;
- (id)_bboxAlignedFaceObservationsFromFaceObservations:(id)a0 inImage:(id)a1 withError:(id *)a2;
- (void).cxx_destruct;
- (BOOL)_alignBBoxForPVFaces:(id)a0 forImage:(id)a1;
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)a0 andCandidateFaces:(id)a1;
- (id)_faceObservationsWithBBoxFromPVFaces:(id)a0 mapping:(id)a1;
- (id)mergeExistingFaces:(id)a0 withDetectedFaces:(id)a1 forImage:(id)a2;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1;

@end
