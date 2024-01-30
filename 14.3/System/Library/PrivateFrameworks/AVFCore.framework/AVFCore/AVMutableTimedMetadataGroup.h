@class NSArray, AVTimedMetadataGroupInternal;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {
    AVTimedMetadataGroupInternal *_mutablePriv;
}

@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (copy, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItems:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;

@end
