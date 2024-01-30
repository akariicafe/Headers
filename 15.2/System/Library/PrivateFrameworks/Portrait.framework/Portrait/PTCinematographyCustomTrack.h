@class NSArray;

@interface PTCinematographyCustomTrack : PTCinematographyTrack

@property (retain, nonatomic) NSArray *detections;
@property (readonly, nonatomic) NSArray *allDetections;

- (unsigned long long)trackType;
- (BOOL)isUserCreated;
- (void).cxx_destruct;
- (BOOL)isDiscrete;
- (id)detectionNearestTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_initWithCinematographyDictionary:(id)a0;
- (id)_asCinematographyDictionary;
- (id)detectionInFrame:(id)a0;
- (id)detectionAtOrBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)detectionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)_trackByTrimmingToTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 subtracting:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithDetections:(id)a0;
- (void)applyDetectionSmoothing;

@end
