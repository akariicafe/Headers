@interface SKWarpGeometryGrid : SKWarpGeometry <NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _sourcePositions;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _destPositions;
    void /* unknown type, empty encoding */ _dimensions;
    int _vertexCount;
    BOOL _isIdentityWarp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *sourcePositions;
@property (readonly, nonatomic) const void *destPositions;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) long long numberOfRows;
@property (readonly, nonatomic) long long vertexCount;

+ (id)grid;
+ (id)gridWithColumns:(long long)a0 rows:(long long)a1;
+ (id)gridWithColumns:(long long)a0 rows:(long long)a1 sourcePositions:(const void *)a2 destPositions:(const void *)a3;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)gridByReplacingSourcePositions:(const void *)a0;
- (void /* unknown type, empty encoding */)destPositionAtIndex:(long long)a0;
- (id)gridByReplacingDestPositions:(const void *)a0;
- (id)initWithColumns:(long long)a0 rows:(long long)a1 sourcePositions:(const void *)a2 destPositions:(const void *)a3;
- (BOOL)isEqualToGrid:(id)a0;
- (BOOL)isIdentityWarp;
- (void /* unknown type, empty encoding */)sourcePositionAtIndex:(long long)a0;

@end
