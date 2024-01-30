@interface SCNCone : SCNGeometry {
    double _conetopRadius;
    double _conebottomRadius;
    double _coneheight;
    long long _coneheightSegmentCount;
    long long _coneradialSegmentCount;
    long long _coneprimitiveType;
}

@property (nonatomic) double topRadius;
@property (nonatomic) double bottomRadius;
@property (nonatomic) double height;
@property (nonatomic) long long radialSegmentCount;
@property (nonatomic) long long heightSegmentCount;

+ (BOOL)supportsSecureCoding;
+ (id)coneWithTopRadius:(double)a0 bottomRadius:(double)a1 height:(double)a2;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPrimitiveType:(long long)a0;
- (long long)primitiveType;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 { float x0; float x1; float x2; } *)a0 max:(struct SCNVector3 { float x0; float x1; float x2; } *)a1;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (id)presentationGeometry;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 { float x0; float x1; float x2; } *)a0 radius:(double *)a1;
- (void)_setupObjCModelFrom:(id)a0;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)__createCFObject;
- (void)_syncObjCModel:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; unsigned int x23; } x1; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x2; struct __CFData *x3; } *)a0;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; unsigned int x23; } x1; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x2; struct __CFData *x3; } *)a0;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; unsigned int x23; } x1; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x2; struct __CFData *x3; } *)a0;
- (id)presentationCone;

@end
