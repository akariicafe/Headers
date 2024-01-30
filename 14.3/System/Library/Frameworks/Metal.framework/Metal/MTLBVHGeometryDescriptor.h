@protocol MTLBuffer;

@interface MTLBVHGeometryDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long primitiveType;
@property (nonatomic) unsigned long long primitiveCount;
@property (retain, nonatomic) id<MTLBuffer> maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;

- (void)dealloc;

@end
