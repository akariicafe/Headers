@interface ARPatchGrid : NSObject <NSSecureCoding> {
    struct vector<ARPatch, std::allocator<ARPatch>> { struct *__begin_; struct *__end_; struct __compressed_pair<ARPatch *, std::allocator<ARPatch>> { struct *__value_; } __end_cap_; } _patchesVector;
    float _angle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) const struct { } *patches;
@property (readonly, nonatomic) float pivot;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPatchesVector:(struct vector<ARPatch, std::allocator<ARPatch>> { struct *x0; struct *x1; struct __compressed_pair<ARPatch *, std::allocator<ARPatch>> { struct *x0; } x2; })a0 pivotAngle:(float)a1;

@end
