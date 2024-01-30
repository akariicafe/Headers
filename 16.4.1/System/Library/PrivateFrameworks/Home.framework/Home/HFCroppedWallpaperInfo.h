@interface HFCroppedWallpaperInfo : NSObject <NSCopying>

@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } center;
@property (readonly, nonatomic) double scale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)initWithSource:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2;

@end
