@class SCNMTLBuffer;

@interface SCNMTLMeshElement : NSObject

@property (nonatomic) long long indexCount;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) long long sharedIndexBufferOffset;
@property (retain, nonatomic) SCNMTLBuffer *indexBuffer;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long primitiveType;
@property (readonly, nonatomic) long long primitiveCount;
@property (readonly, nonatomic) long long effectiveIndexOffset;
@property (readonly, nonatomic) long long effectiveIndexCount;

- (void)dealloc;
- (id)description;
- (void)setPrimitiveRange:(struct { long long x0; long long x1; })a0;
- (void)setupWithElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; unsigned int x1; unsigned int x2; struct __C3DMeshElement *x3; unsigned char x4; unsigned char x5; unsigned char x6; struct { char x0; struct __CFData *x1; unsigned int x2; unsigned int *x3; struct { long long x0; long long x1; } x4; unsigned char x5; BOOL x6; } x7; void *x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource *x13; void /* unknown type, empty encoding */ x14[2]; struct *x15; unsigned int x16; } *)a0;

@end
