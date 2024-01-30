@class VCPPhotosFaceProcessingContext;

@interface VCPFaceMerger : NSObject {
    VCPPhotosFaceProcessingContext *_context;
}

+ (BOOL)_allowANE;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)mergeExistingFaces:(id)a0 withDetectedFaces:(id)a1 forImage:(id)a2;
- (id)_bboxAlignedFaceObservationsFromFaceObservations:(id)a0 inImage:(id)a1 withError:(id *)a2;
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)a0 andCandidateFaces:(id)a1;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1;
- (id)_faceObservationsWithBBoxFromVCPPhotosFaces:(id)a0 mapping:(id)a1;
- (BOOL)_alignBBoxForVCPPhotosFaces:(id)a0 forImage:(id)a1;

@end
