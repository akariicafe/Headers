@interface MDLVolumeGrid : NSObject {
    struct unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree> > { struct __compressed_pair<ModelIO::SCNOctree *, std::__1::default_delete<ModelIO::SCNOctree> > { struct SCNOctree *__value_; } __ptr_; } _octree;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAsset:(id)a0 divisions:(int)a1;
- (id)initWithObject:(id)a0 divisions:(int)a1;
- (id)initWithAsset:(id)a0 divisions:(int)a1 interiorWidth:(float)a2 exteriorWidth:(float)a3 patchRadius:(float)a4;
- (id)meshWithStyle:(unsigned long long)a0;
- (unsigned long long *)trianglesIntersectingRayWithOrigin:(id)a0 direction:(SEL)a1 count:(unsigned long long *)a2;

@end
