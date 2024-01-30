@class HMIVideoEventBuffer;

@interface HMIVideoTimeline : HMFObject {
    HMIVideoEventBuffer *_buffer;
}

- (void).cxx_destruct;
- (id)initWithMaxCapacity:(long long)a0;
- (id)dateAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)addDate:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (double)timeIntervalSinceDateAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
