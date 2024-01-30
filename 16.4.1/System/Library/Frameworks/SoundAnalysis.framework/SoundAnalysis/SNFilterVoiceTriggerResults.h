@class SNVoiceTriggerResult;

@interface SNFilterVoiceTriggerResults : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeBetweenTriggers;
    SNVoiceTriggerResult *_lastResult;
}

- (void).cxx_destruct;

@end
