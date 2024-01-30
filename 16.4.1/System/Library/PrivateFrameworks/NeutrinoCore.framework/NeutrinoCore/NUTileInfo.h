@interface NUTileInfo : NSObject

@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } frameRect;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } contentRect;

+ (id)tileInfoWithIndex:(long long)a0 size:(struct { long long x0; long long x1; })a1 frameRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 contentRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3;

- (id)debugDescription;
- (id)translatedAndClippedRegion:(id)a0;

@end
