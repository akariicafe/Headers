@class NSString;

@interface MPSNDArrayDefaultAllocator : NSObject <MPSNDArrayAllocator> {
    int _dealloc_ok;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)arrayForCommandBuffer:(id)a0 arrayDescriptor:(id)a1 kernel:(id)a2;
- (id)bufferForCommandBuffer:(id)a0 size:(unsigned long long)a1 options:(unsigned long long)a2 kernel:(id)a3;
- (void)freeBuffer:(id)a0 forCommandBuffer:(id)a1;

@end
