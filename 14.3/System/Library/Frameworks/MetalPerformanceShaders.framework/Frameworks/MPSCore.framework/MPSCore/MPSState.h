@class NSString;
@protocol MTLResource;

@interface MPSState : NSObject {
    struct MPSStateResource { unsigned short x0; union { struct MPSAutoTexture { struct atomic<id<MTLTexture> > { struct __cxx_atomic_impl<id<MTLTexture>, std::__1::__cxx_atomic_base_impl<id<MTLTexture> > > { _Atomic id x0; } x0; } x0; struct { unsigned long long x0; unsigned long long x1; } x1; unsigned long long x2; struct MPSPixelInfo { unsigned short x0 : 10; unsigned char x1 : 6; unsigned char x2 : 4; unsigned char x3 : 4; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 8; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 6; unsigned char x17 : 4; unsigned char x18 : 3; unsigned char x19 : 2; } x3; union { struct { struct MPSAutoTexture *x0; unsigned int x1; unsigned int x2; } x0; struct { id x0; union { struct { struct MPSDevice *x0; } x0; struct { id x0; } x1; } x1; } x1; } x4; unsigned char x5; unsigned char x6; } x0; struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x0; unsigned long long x1; id x2; id x3; struct { unsigned long long x0; unsigned long long x1; } x4; } x1; } x1; } *_resources;
    NSString *_label;
    unsigned short _flags;
    BOOL _updatedAlready;
}

@property (readonly, nonatomic) unsigned long long resourceCount;
@property (nonatomic) unsigned long long readCount;
@property (readonly, nonatomic) BOOL isTemporary;
@property (copy) NSString *label;
@property (readonly, retain, nonatomic) id<MTLResource> resource;

+ (id)temporaryStateWithCommandBuffer:(id)a0;
+ (id)temporaryStateWithCommandBuffer:(id)a0 textureDescriptor:(id)a1;
+ (id)temporaryStateWithCommandBuffer:(id)a0 resourceList:(id)a1;
+ (id)temporaryStateWithCommandBuffer:(id)a0 bufferSize:(unsigned long long)a1;

- (id)initWithResource:(id)a0;
- (id)initWithDevice:(id)a0 textureDescriptor:(id)a1;
- (id)initWithResources:(id)a0;
- (void)dealloc;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (id)initWithDevice:(id)a0 resourceList:(id)a1;
- (id)initWithDevice:(id)a0 bufferSize:(unsigned long long)a1;
- (unsigned long long)bufferSizeAtIndex:(unsigned long long)a0;
- (id)debugDescription;
- (unsigned long long)resourceSize;
- (unsigned long long)resourceTypeAtIndex:(unsigned long long)a0;
- (struct MPSStateTextureInfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7[4]; })textureInfoAtIndex:(unsigned long long)a0;
- (id)resourceAtIndex:(unsigned long long)a0 allocateMemory:(BOOL)a1;

@end
