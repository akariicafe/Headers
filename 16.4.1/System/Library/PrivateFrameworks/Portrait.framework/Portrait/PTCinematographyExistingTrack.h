@interface PTCinematographyExistingTrack : PTCinematographyTrack

- (unsigned long long)trackType;
- (id)detectionNearestTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isDiscrete;
- (id)detectionAtOrBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)detectionInFrame:(id)a0;
- (id)detectionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithDetectionType:(unsigned long long)a0 trackIdentifier:(long long)a1 groupIdentifier:(long long)a2;

@end
