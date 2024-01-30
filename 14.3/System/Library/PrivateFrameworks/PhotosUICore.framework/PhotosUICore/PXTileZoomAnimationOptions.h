@interface PXTileZoomAnimationOptions : NSObject <NSCopying>

@property (nonatomic) long long transformType;
@property (nonatomic) BOOL shouldCrossfade;
@property (nonatomic) unsigned long long flags;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
