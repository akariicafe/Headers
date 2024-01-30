@class NSString, TSDGLDataArrayBuffer, TSDGPUDataBuffer;

@interface TSDGLDataBufferAttribute : NSObject

@property (nonatomic) int locationInShader;
@property (nonatomic) unsigned long long bufferOffset;
@property (nonatomic) TSDGLDataArrayBuffer *dataArrayBuffer;
@property (nonatomic) TSDGPUDataBuffer *dataBuffer;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int bufferUsage;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) int componentCount;
@property (readonly, nonatomic) BOOL isNormalized;

+ (id)attributeWithName:(id)a0 bufferUsage:(unsigned int)a1 dataType:(long long)a2 normalized:(BOOL)a3 componentCount:(unsigned long long)a4;

- (void)dealloc;
- (id)description;
- (void)setBufferUsage:(unsigned int)a0;
- (id)initWithName:(id)a0 bufferUsage:(unsigned int)a1 dataType:(long long)a2 normalized:(BOOL)a3 componentCount:(unsigned long long)a4;
- (void)setComponentCount:(int)a0;

@end
