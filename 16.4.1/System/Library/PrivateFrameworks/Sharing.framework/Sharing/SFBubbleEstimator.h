@class SFRSSIQueue;

@interface SFBubbleEstimator : NSObject {
    SFRSSIQueue *_rssiQueue;
    unsigned long long _thresholdStartTicks;
}

@property (readonly, nonatomic) BOOL insideBubble;
@property (readonly, nonatomic) BOOL insideBubbleWithThreshold;
@property (nonatomic) BOOL preventBoost;
@property (nonatomic) long long rssiEnter;
@property (nonatomic) long long rssiExit;
@property (nonatomic) double thresholdSeconds;
@property (readonly, nonatomic) double velocity;
@property (readonly, nonatomic) double velocitySmoothed;

+ (id)estimatorWithEnter:(long long)a0 exit:(long long)a1;
+ (id)estimatorWithEnter:(long long)a0 exit:(long long)a1 threshold:(double)a2;

- (void).cxx_destruct;
- (void)reset;
- (long long)updateWithRSSI:(long long)a0;
- (BOOL)shouldExpandBubble;

@end
