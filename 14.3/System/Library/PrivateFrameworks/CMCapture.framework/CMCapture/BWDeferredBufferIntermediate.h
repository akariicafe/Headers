@class NSString, NSDictionary;

@interface BWDeferredBufferIntermediate : BWDeferredIntermediate

@property (readonly, nonatomic) struct __CVBuffer { } *buffer;
@property (readonly, nonatomic) unsigned long long bufferType;
@property (readonly, nonatomic) NSString *metadataTag;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) int compressionProfile;

+ (BOOL)supportsSecureCoding;

- (int)setBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 bufferType:(unsigned long long)a2 metadataTag:(id)a3 portType:(id)a4 compressionProfile:(int)a5 URL:(id)a6;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;
- (id)fetchAndRetain:(int *)a0;
- (id)archive:(int *)a0;
- (void)dealloc;
- (struct __CVBuffer { } *)_read:(int *)a0;
- (id)initWithCoder:(id)a0;
- (int)_createCVPixelBufferFromAttributes:(id)a0 pixelBuffer:(struct __CVBuffer **)a1;
- (int)_compressionSettingsForProfile:(int)a0 format:(int *)a1 options:(id *)a2;
- (int)_writeAndReleaseBacking;
- (int)flush;
- (void)encodeWithCoder:(id)a0;

@end
