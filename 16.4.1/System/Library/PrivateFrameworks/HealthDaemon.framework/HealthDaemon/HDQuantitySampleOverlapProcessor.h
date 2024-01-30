@interface HDQuantitySampleOverlapProcessor : NSObject {
    unsigned long long _overlapFunction;
    double _anchorTime;
    long long _workingSetCount;
    struct { double startTime; double endTime; double sampleValue; } _workingSet[128];
}

- (long long)addSample:(struct { double x0; double x1; double x2; })a0 outputSamples:(struct { double x0; double x1; double x2; }[8])a1 error:(id *)a2;
- (long long)finishWithRemainingSamples:(struct { double x0; double x1; double x2; }[8])a0 error:(id *)a1;
- (id)initWithOverlapFunction:(unsigned long long)a0;
- (void)resetAnchorTime:(double)a0;

@end
