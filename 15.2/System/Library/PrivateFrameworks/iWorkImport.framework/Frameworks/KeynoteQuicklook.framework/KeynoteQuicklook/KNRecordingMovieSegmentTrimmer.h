@class KNMovieSegment;

@interface KNRecordingMovieSegmentTrimmer : NSObject {
    KNMovieSegment *_movieSegment;
    double _trimDurationInSeconds;
}

+ (BOOL)canTrimMovieSegmentsInContext:(id)a0;

- (void).cxx_destruct;
- (id)initWithMovieSegment:(id)a0 trimDuration:(double)a1;
- (void)trimMovieSegmentWithCompletionHandler:(id /* block */)a0;

@end
