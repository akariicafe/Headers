@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {
    AVTimedMetadataGroupInternal *_priv;
}

@property (readonly, nonatomic, getter=_timedMetadataGroupInternal) AVTimedMetadataGroupInternal *timedMetadataGroupInternal;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (struct opaqueCMSampleBuffer { } *)_createSerializedRepresentationWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (const struct opaqueCMFormatDescription { } *)copyFormatDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithItems:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
