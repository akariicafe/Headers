@class MTLAccelerationStructureDescriptor, MTLIOAccelBuffer;
@protocol MTLBuffer;

@interface MTLIOAccelAccelerationStructure : MTLIOAccelResource {
    MTLIOAccelBuffer<MTLBuffer> *_buffer;
    unsigned long long _bufferOffset;
}

@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) MTLIOAccelBuffer<MTLBuffer> *buffer;
@property (readonly, nonatomic) unsigned long long bufferOffset;
@property (retain, nonatomic) MTLAccelerationStructureDescriptor *descriptor;

- (void)dealloc;
- (unsigned long long)size;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1;

@end
