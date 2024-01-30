@class NSString, NSMutableArray;

@interface SNVoiceTriggerCommandFilter : NSObject {
    long long _maxHistoryLength;
    double _confidenceThreshold;
    int _streak;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableArray *history;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0;
- (id)processNewTimestep:(double)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;

@end
