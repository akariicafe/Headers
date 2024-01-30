@interface GEOComposedRouteLengthMarker : NSObject

@property (nonatomic) unsigned long long pathIndex;
@property (nonatomic) unsigned long long pointIndex;
@property (nonatomic) double length;

- (long long)compare:(id)a0;
- (id)description;

@end
