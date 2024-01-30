@interface MapsSuggestionsETARequirements : NSObject <NSCopying>

@property (readonly, nonatomic) double maxAge;
@property (readonly, nonatomic) double maxDistance;
@property (readonly, nonatomic) double minAccuracy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMaxAge:(double)a0 maxDistance:(double)a1 minAccuracy:(double)a2;

@end
