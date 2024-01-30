@class NSDictionary, NSString;

@interface BWDeferredBufferIntermediate : BWDeferredIntermediate

@property (readonly, nonatomic) struct __CVBuffer { } *buffer;
@property (readonly, nonatomic) unsigned long long bufferType;
@property (readonly, nonatomic) unsigned long long captureFrameFlags;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *metadataTag;
@property (readonly, nonatomic) NSString *rawThumbnailsBufferTag;
@property (readonly, nonatomic) NSString *rawThumbnailsMetadataTag;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) int compressionProfile;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (int)setBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithCoder:(id)a0;
- (int)flush;
- (unsigned int)pixelFormat;
- (void)dealloc;
- (id)description;
- (id)archive:(int *)a0;
- (id)fetchAndRetain:(int *)a0;
- (id)_shortString;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 bufferType:(unsigned long long)a2 captureFrameFlags:(unsigned long long)a3 metadataTag:(id)a4 rawThumbnailsBufferTag:(id)a5 rawThumbnailsMetadataTag:(id)a6 portType:(id)a7 compressionProfile:(int)a8 URL:(id)a9;
- (void)releaseBuffer;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;

@end
