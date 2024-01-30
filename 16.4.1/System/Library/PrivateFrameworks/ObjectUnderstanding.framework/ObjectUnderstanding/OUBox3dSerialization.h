@interface OUBox3dSerialization : NSObject

- (struct OUBox3d { struct box3d { void /* unknown type, empty encoding */ x0[8]; } x0; id x1; float x2; id x3; id x4; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x5; struct vector<bool, std::allocator<bool>> { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x0; } x2; } x6; id x7; short x8; })box3dFromDictionary:(id)a0;
- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d *x0; struct OUBox3d *x1; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d *x0; } x2; })boxes3dFromDictionary:(id)a0;
- (id)dictionaryFromBox3d:(struct OUBox3d { struct box3d { void /* unknown type, empty encoding */ x0[8]; } x0; id x1; float x2; id x3; id x4; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x5; struct vector<bool, std::allocator<bool>> { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x0; } x2; } x6; id x7; short x8; })a0;
- (id)dictionaryFromBoxes3d:(struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d *x0; struct OUBox3d *x1; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d *x0; } x2; })a0;
- (id)dictionaryFromBoxes3dPointCloud:(struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d *x0; struct OUBox3d *x1; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d *x0; } x2; })a0 pointCloud:(id)a1;
- (id)pointCloudFromDictionary:(id)a0;

@end
