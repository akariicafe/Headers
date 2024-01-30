@class HMIVideoTimeline, HMITimeIntervalAverage;

@interface HMIVideoTimelineProfiler : HMFObject {
    HMIVideoTimeline *_timeline;
    HMITimeIntervalAverage *_average;
}

- (id)initWithMaxCapacity:(long long)a0;
- (void).cxx_destruct;
- (void)startedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)averageTime;

@end
