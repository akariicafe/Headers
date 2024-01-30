@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXPlacesTestDataGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSArray *_latOffsets;
    NSArray *_longOffsets;
    unsigned long long _max;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _from;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _to;
    NSMutableArray *_dataPoints;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)generateDataPointsFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 longDir:(long long)a2 currentCount:(unsigned long long)a3;
- (id)generateOffsetArray:(double)a0 insert:(BOOL)a1;
- (void)generateTestImages:(unsigned long long)a0 fromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a2 atEnd:(id /* block */)a3;

@end
