@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {
    AVTimedMetadataGroupInternal *_priv;
}

@property (readonly, nonatomic, getter=_timedMetadataGroupInternal) AVTimedMetadataGroupInternal *timedMetadataGroupInternal;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (struct opaqueCMSampleBuffer { } *)_createSerializedRepresentationWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (const struct opaqueCMFormatDescription { } *)copyFormatDescription;
- (id)initWithItems:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
