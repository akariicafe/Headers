@interface GEOMapFeatureLine : NSObject {
    struct { double x0; double x1; } *_coordinates;
    unsigned long long _coordinateCount;
    double _length;
    BOOL _isFlipped;
}

@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) double length;

- (id)init;
- (void)dealloc;
- (id)_containingTile;
- (struct { float x0; float x1; } *)_tilePointsForSection:(unsigned long long)a0 withCount:(out unsigned long long *)a1;

@end
