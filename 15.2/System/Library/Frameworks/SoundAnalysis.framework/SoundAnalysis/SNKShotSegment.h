@class NSURL;

@interface SNKShotSegment : NSObject

@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (copy) NSURL *url;

- (void).cxx_destruct;

@end
