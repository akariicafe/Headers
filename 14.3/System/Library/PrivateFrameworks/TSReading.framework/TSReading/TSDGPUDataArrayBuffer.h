@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface TSDGPUDataArrayBuffer : NSObject <TSDGPUDataBufferAccessor> {
    NSMutableArray *_vertexAttributes;
    unsigned long long _vertexCount;
    unsigned long long _dataTypeSizeInBytes;
    unsigned int _bufferUsage;
    BOOL _usesMetalBuffer;
    long long *_needsUpdateFirstIndex;
    long long *_needsUpdateLastIndex;
    char *_gLData;
    BOOL _dataBufferHasBeenSetup;
    unsigned int *_gLDataBuffers;
    NSMutableDictionary *_attributeOffsetsDictionary;
    NSArray *_metalDataBuffers;
    unsigned long long _bufferIndex;
}

@property (readonly, nonatomic) BOOL hasUpdatedData;
@property (readonly, nonatomic) unsigned long long dataBufferEntrySize;
@property (readonly, nonatomic) unsigned long long bufferCount;
@property (nonatomic) unsigned long long currentBufferIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)vertexCount;
- (char *)dataPointer;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addIndexNeedsUpdate:(long long)a0;
- (void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)a0;
- (unsigned long long)p_bufferOffsetOfAttribute:(id)a0 atIndex:(unsigned long long)a1 component:(unsigned long long)a2;
- (void)setMetalFloat:(float)a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (float)metalFloatForAttribute:(id)a0 atIndex:(unsigned long long)a1;
- (void)setCGFloat:(double)a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (struct { float x0; float x1; })metalPoint2DForAttribute:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMetalPoint2D:(struct { float x0; float x1; })a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (struct { float x0; float x1; float x2; })metalPoint3DForAttribute:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMetalPoint3D:(struct { float x0; float x1; float x2; })a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (struct { float x0; float x1; float x2; float x3; })metalPoint4DForAttribute:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMetalPoint4D:(struct { float x0; float x1; float x2; float x3; })a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithVertexAttributes:(id)a0 vertexCount:(unsigned long long)a1 bufferCount:(unsigned long long)a2;
- (void)addAllIndexesNeedUpdate;
- (void)enableArrayBufferWithDevice:(id)a0;
- (void)encodeArrayBufferWithEncoder:(id)a0 atIndex:(long long)a1;
- (void)swapGPUDataBuffers;

@end
