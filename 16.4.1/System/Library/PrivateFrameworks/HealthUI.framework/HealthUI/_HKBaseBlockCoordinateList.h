@class NSArray;

@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList {
    NSArray *_coordinates;
    struct { long long index; long long zoom; } _blockPath;
}

- (void).cxx_destruct;
- (id)coordinates;
- (id)_coordinatesInChartableRange:(id)a0;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 chartableValueRange:(id)a1 roundToViewScale:(BOOL)a2 block:(id /* block */)a3;
- (long long)_numCoordinatesInChartableRange:(id)a0;
- (struct { long long x0; long long x1; })blockPathEnd;
- (struct { long long x0; long long x1; })blockPathStart;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithCoordinates:(id)a0 blockPath:(struct { long long x0; long long x1; })a1;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (long long)numCoordinates;

@end
