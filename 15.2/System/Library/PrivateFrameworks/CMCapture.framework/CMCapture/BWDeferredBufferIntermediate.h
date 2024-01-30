@class NSString, NSDictionary;

@interface BWDeferredBufferIntermediate : BWDeferredIntermediate

@property (readonly, nonatomic) struct __CVBuffer { } *buffer;
@property (readonly, nonatomic) unsigned long long bufferType;
@property (readonly, nonatomic) NSString *metadataTag;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) int compressionProfile;

+ (BOOL)supportsSecureCoding;

- (int)flush;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)archive:(int *)a0;
- (void)dealloc;
- (int)setBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 bufferType:(unsigned long long)a2 metadataTag:(id)a3 portType:(id)a4 compressionProfile:(int)a5 URL:(id)a6;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;
- (id)fetchAndRetain:(int *)a0;

@end
