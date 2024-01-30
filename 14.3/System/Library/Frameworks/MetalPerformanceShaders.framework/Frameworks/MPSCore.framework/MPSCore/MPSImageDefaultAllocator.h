@class NSString;

@interface MPSImageDefaultAllocator : NSObject <MPSImageAllocator> {
    int _dealloc_ok;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)imageBatchForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2 count:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (id)imageForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
