@interface PTCinematographyStreamOptions : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic, setter=_setSnapshotPolicy:) unsigned long long _snapshotPolicy;
@property (nonatomic, setter=_setOverrideFrameSnapshotPolicy:) BOOL _overrideFrameSnapshotPolicy;
@property unsigned long long version;
@property struct CGSize { double width; double height; } fixedFocusNormalizedRectSize;

- (id)initWithOptions:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
