@interface OU3DObjectMerger : NSObject

- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d *x0; struct OUBox3d *x1; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d *x0; } x2; })crossClassNMS:(const void *)a0;
- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d *x0; struct OUBox3d *x1; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d *x0; } x2; })mergeCabinets:(const void *)a0 iou_mat:(const void *)a1;
- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d *x0; struct OUBox3d *x1; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d *x0; } x2; })mergeOtherObjects:(const void *)a0;
- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d *x0; struct OUBox3d *x1; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d *x0; } x2; })removeLowHeightStairObjects:(const void *)a0;

@end
