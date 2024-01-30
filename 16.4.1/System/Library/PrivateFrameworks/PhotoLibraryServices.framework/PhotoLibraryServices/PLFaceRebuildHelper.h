@class NSManagedObjectContext;

@interface PLFaceRebuildHelper : NSObject {
    NSManagedObjectContext *_context;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_insertDetectionTraitsForRebuildTrait:(id)a0 onDetection:(id)a1;
- (id)findExistingDetectedFaceForRebuildFace:(id)a0 onAsset:(id)a1;
- (id)findOrInsertDetectedFaceForRebuildFace:(id)a0 onAsset:(id)a1;
- (id)insertDetectedFaceForRebuildFace:(id)a0 onAsset:(id)a1;
- (void)rebuildDetectedFace:(id)a0 onAsset:(id)a1 person:(id)a2;
- (void)rebuildHiddenFace:(id)a0 onAsset:(id)a1;
- (void)rebuildRejectedFace:(id)a0 onAsset:(id)a1 person:(id)a2;

@end
