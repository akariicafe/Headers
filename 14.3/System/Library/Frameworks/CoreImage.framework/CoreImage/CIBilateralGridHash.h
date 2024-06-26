@interface CIBilateralGridHash : NSObject {
    int _n_dims;
    int _width;
    int _height;
    int _sigma_s;
    int _sigma_r_luma;
    int _sigma_r_chroma;
    unsigned long long _max_hash_table_size;
    unsigned int _hash_table_size;
    struct BGHashMapContext { } *_hash_map;
    struct { union { unsigned long long x0; unsigned char x1[8]; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_hash_table;
    unsigned int *_hash_matrix_data;
    unsigned int *_blur_indices;
    unsigned int *_coord_indices;
    unsigned int *_coord_table;
    unsigned int *_coord_indices_off;
    unsigned int *_interp_indices;
    unsigned int *_interp_table;
    char *_interp_pad;
}

- (int)width;
- (void)clear;
- (void)dealloc;
- (int)sigma_s;
- (void)blur_n:(float *)a0;
- (int)height;
- (int)countDims;
- (int)countVertices;
- (void)_computeCoordIndices;
- (int)sigma_r_luma;
- (int)_computeBilateralSpaceYCC444:(struct __IOSurface { } *)a0 region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 sigma_s:(int)a3 sigma_r_luma:(int)a4 sigma_r_chroma:(int)a5;
- (void)_computeBlurIndices;
- (void)_computeInterpIndices;
- (int)_createWithSurface:(struct __IOSurface { } *)a0 region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 sigma_s:(int)a3 sigma_r_luma:(int)a4 sigma_r_chroma:(int)a5;
- (void)blur:(const float *)a0 pout:(float *)a1;
- (int)_addHashKeyAtX:(int)a0 Y:(int)a1 key:(unsigned long long)a2 isKeyExist:(BOOL *)a3;
- (BOOL)_hashMapFindKey:(unsigned long long)a0 to:(unsigned int *)a1;
- (void)_hashMapAddKey:(unsigned long long)a0 andValue:(unsigned int)a1;
- (int)sigma_r_chroma;
- (void)splat:(struct __CVBuffer { } *)a0 pout:(float *)a1;
- (id)initWithWidth:(int)a0 height:(int)a1 maxHashTableSize:(unsigned long long)a2;
- (void)slice:(const float *)a0 outPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)slice_trilinear:(struct __IOSurface { } *)a0 pin:(const float *)a1 pout:(struct __CVBuffer { } *)a2;
- (void)normalize:(const float *)a0 pout:(float *)a1;
- (int)createWithSurface:(struct __IOSurface { } *)a0 region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 sigma_s:(int)a3 sigma_r_luma:(int)a4 sigma_r_chroma:(int)a5;
- (void)splat_w_mul_x:(struct __CVBuffer { } *)a0 inPixelBuffer:(struct __CVBuffer { } *)a1 pout:(float *)a2;
- (void)normalize_blur:(const float *)a0 pout:(float *)a1;
- (void)splat_ones:(float *)a0;
- (void)blur_ones:(float *)a0;
- (const unsigned int *)blur_indices:(int)a0 n_blur_indices:(int *)a1;
- (const void *)hash_table;
- (const unsigned int *)hash_matrix;
- (const unsigned int *)blur_table;
- (const unsigned int *)coord_indices;
- (const unsigned int *)coord_table;
- (const unsigned int *)interp_indices;
- (const unsigned int *)interp_table;
- (const char *)interp_pad;

@end
