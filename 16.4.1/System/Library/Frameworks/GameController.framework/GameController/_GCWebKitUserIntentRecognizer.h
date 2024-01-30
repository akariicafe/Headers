@class GCPhysicalInputProfile, NSMutableDictionary;

@interface _GCWebKitUserIntentRecognizer : NSObject {
    GCPhysicalInputProfile *_physicalInputProfile;
    NSMutableDictionary *_trackedInputs;
    NSMutableDictionary *_timers;
    double _slidingWindowTotalDuration;
    double _slidingWindowSegmentDuration;
    double _deadzoneSquared;
    int _distanceThreshold;
}

@property (readonly, copy, nonatomic) id /* block */ thumbstickUserIntentHandler;

- (void).cxx_destruct;
- (id)initWithPhysicalInputProfile:(id)a0 thumbstickUserIntentHandler:(id /* block */)a1;
- (id)initWithPhysicalInputProfile:(id)a0 thumbstickUserIntentHandler:(id /* block */)a1 slidingWindowTotalDuration:(double)a2 slidingWindowSegmentDuration:(double)a3 deadzone:(double)a4 sensitivity:(int)a5;
- (void)processChangedElements:(id)a0 atTimestamp:(unsigned long long)a1;

@end
