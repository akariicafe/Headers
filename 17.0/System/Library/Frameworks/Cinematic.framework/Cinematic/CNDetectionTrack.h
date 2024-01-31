@class PTCinematographyTrack;

@interface CNDetectionTrack : NSObject <NSCopying>

@property (retain) PTCinematographyTrack *internalTrack;
@property (retain) PTCinematographyTrack *internalTrack;
@property (readonly) long long detectionType;
@property (readonly) long long detectionID;
@property (readonly) long long detectionGroupID;
@property (readonly, getter=isUserCreated) BOOL userCreated;
@property (readonly, getter=isDiscrete) BOOL discrete;

+ (id)_internalFromTracks:(id)a0;
+ (id)_trackFromInternal:(id)a0;
+ (id)_tracksFromInternal:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithInternal:(id)a0;
- (id)detectionNearestTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)detectionAtOrBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)detectionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
