@class NSString;

@interface MPSTemporaryImageDefaultAllocator : MPSImageDefaultAllocator <MPSImageAllocator>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)imageForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2;

@end
