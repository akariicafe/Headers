@class UIBezierPath;

@interface SCNShape : SCNGeometry {
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    UIBezierPath *_chamferProfile;
    long long _primitiveType;
    long long _chamferMode;
    UIBezierPath *_path;
}

@property (copy, nonatomic) UIBezierPath *path;
@property (nonatomic) double extrusionDepth;
@property (nonatomic) long long chamferMode;
@property (nonatomic) double chamferRadius;
@property (copy, nonatomic) UIBezierPath *chamferProfile;

+ (BOOL)supportsSecureCoding;
+ (id)shapeWithPath:(id)a0 extrusionDepth:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (long long)primitiveType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { char x0; double x1; double x2; int x3; double x4; void *x5; void *x6; })params;
- (id)copy;
- (void)dealloc;
- (void)setPrimitiveType:(long long)a0;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 { float x0; float x1; float x2; } *)a0 max:(struct SCNVector3 { float x0; float x1; float x2; } *)a1;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (id)presentationGeometry;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 { float x0; float x1; float x2; } *)a0 radius:(double *)a1;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)__createCFObject;
- (void)_syncObjCModel:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __C3DMesh *x2; unsigned char x3[16]; } *)a0;
- (void)setDiscretizedStraightLineMaxLength:(double)a0;
- (double)discretizedStraightLineMaxLength;
- (id)initPresentationShapeGeometryWithShapeGeometryRef:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __C3DMesh *x2; unsigned char x3[16]; } *)a0;
- (void)_customEncodingOfSCNShape:(id)a0;
- (void)_customDecodingOfSCNShape:(id)a0;
- (id)initWithShapeGeometryRef:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __C3DMesh *x2; unsigned char x3[16]; } *)a0;

@end
