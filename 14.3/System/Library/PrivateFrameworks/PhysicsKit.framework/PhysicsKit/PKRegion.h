@interface PKRegion : NSObject <NSCopying, NSSecureCoding> {
    int _shape;
    BOOL _isExclusive;
    struct vec4 { void /* unknown type, empty encoding */ v; } _halfExtent;
    struct shared_ptr<PKCPathHolder> { struct PKCPathHolder *__ptr_; struct __shared_weak_count *__cntrl_; } _path;
    int _regionOp;
    int _shape2;
    struct vec4 { void /* unknown type, empty encoding */ v; } _halfExtent2;
    struct shared_ptr<PKCPathHolder> { struct PKCPathHolder *__ptr_; struct __shared_weak_count *__cntrl_; } _path2;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGPath { } *path;

+ (id)infiniteRegion;

- (id)initWithPath:(struct CGPath { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEmpty;
- (void)containsPoints:(const float *)a0 locationStride:(long long)a1 results:(char *)a2 resultsStride:(long long)a3 count:(int)a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithRadius:(float)a0;
- (id)regionByUnionWithRegion:(id)a0;
- (id)regionByDifferenceFromRegion:(id)a0;
- (id)regionByIntersectionWithRegion:(id)a0;
- (id).cxx_construct;
- (id)inverseRegion;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRegion:(id)a0;
- (BOOL)isInfinite;

@end
