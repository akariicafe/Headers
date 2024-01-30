@class HMIForegroundBlob, NSString, NSMutableSet, NSMutableArray;

@interface HMIForegroundTrack : HMFObject

@property (readonly) NSMutableArray *blobs;
@property (readonly) NSMutableSet *eventClasses;
@property (readonly) HMIForegroundBlob *lastBlob;
@property (readonly) NSString *shortDescription;

- (void).cxx_destruct;
- (id)initWithBlob:(id)a0;
- (unsigned long long)stationaryIndexToBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appendBlob:(id)a0;
- (BOOL)isExpiredAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isStationaryAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (float)similarityToBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createEventForEventClass:(Class)a0;

@end
