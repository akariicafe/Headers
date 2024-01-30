@class SNVoiceTriggerResult;

@interface SNFilterVoiceTriggerResults : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeBetweenTriggers;
    SNVoiceTriggerResult *_lastResult;
}

- (void).cxx_destruct;
- (id)initWithTimeBetweenTriggers:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)removeOverlappingResults:(id)a0;

@end
