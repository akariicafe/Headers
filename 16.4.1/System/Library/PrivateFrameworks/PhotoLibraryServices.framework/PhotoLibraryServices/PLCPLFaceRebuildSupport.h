@class NSManagedObjectContext, PLFaceRebuildHelper, PLManagedAsset;

@interface PLCPLFaceRebuildSupport : NSObject {
    PLManagedAsset *_asset;
    NSManagedObjectContext *_context;
    PLFaceRebuildHelper *_rebuildHelper;
    int _detectedFaceCount;
    int _rejectedFaceCount;
    int _hiddenFaceCount;
}

+ (void)rebuildDeferredFacesForAsset:(id)a0 inManagedObjectContext:(id)a1;

- (void).cxx_destruct;
- (void)rebuildAllFaces;
- (id)fetchDeferredFacesToRebuild;
- (id)fetchPersonForDeferredFace:(id)a0;
- (id)initWithAsset:(id)a0 managedObjectContext:(id)a1;
- (void)rebuildDetectedFace:(id)a0;
- (void)rebuildFace:(id)a0;
- (void)rebuildHiddenFace:(id)a0;
- (void)rebuildRejectedFace:(id)a0;

@end
