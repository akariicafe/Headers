@class NSManagedObjectContext;

@interface PLFaceRebuildHelper : NSObject {
    NSManagedObjectContext *_context;
}

- (id)initWithContext:(id)a0;
- (id)insertDetectedFaceForRebuildFace:(id)a0 onAsset:(id)a1;
- (void).cxx_destruct;
- (id)findOrInsertDetectedFaceForRebuildFace:(id)a0 onAsset:(id)a1;
- (id)findExistingDetectedFaceForRebuildFace:(id)a0 onAsset:(id)a1;
- (void)rebuildHiddenFace:(id)a0 onAsset:(id)a1;
- (void)rebuildRejectedFace:(id)a0 onAsset:(id)a1 person:(id)a2;
- (void)rebuildDetectedFace:(id)a0 onAsset:(id)a1 person:(id)a2;

@end
