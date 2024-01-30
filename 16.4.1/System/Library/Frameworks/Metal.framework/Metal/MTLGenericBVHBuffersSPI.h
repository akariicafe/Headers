@protocol MTLBuffer;

@interface MTLGenericBVHBuffersSPI : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (retain, nonatomic) id<MTLBuffer> headerBuffer;
@property (nonatomic) unsigned long long headerBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> innerNodeBuffer;
@property (nonatomic) unsigned long long innerNodeBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> leafNodeBuffer;
@property (nonatomic) unsigned long long leafNodeBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> primitiveBuffer;
@property (nonatomic) unsigned long long primitiveBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> geometryBuffer;
@property (nonatomic) unsigned long long geometryBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> instanceTransformBuffer;
@property (nonatomic) unsigned long long instanceTransformBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> perPrimitiveDataBuffer;
@property (nonatomic) unsigned long long perPrimitiveDataBufferOffset;

- (id)init;
- (id)initWithVersion:(unsigned long long)a0;

@end
