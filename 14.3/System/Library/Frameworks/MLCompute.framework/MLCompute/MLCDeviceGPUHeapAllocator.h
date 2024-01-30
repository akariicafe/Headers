@class NSString;

@interface MLCDeviceGPUHeapAllocator : NSObject <MPSImageAllocator>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDebuggingEnabled;
@property (readonly, nonatomic) unsigned long long heapSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageBatchForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2 count:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (id)imageForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHeapSize:(unsigned long long)a0;

@end
