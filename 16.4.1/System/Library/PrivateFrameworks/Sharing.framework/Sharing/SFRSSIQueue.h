@class NSMutableArray;

@interface SFRSSIQueue : NSObject {
    NSMutableArray *_rssiValues;
    NSMutableArray *_tickValues;
}

@property (readonly, nonatomic) double velocity;
@property (readonly, nonatomic) double velocitySmoothed;

- (void).cxx_destruct;
- (void)addSample:(double)a0 atTicks:(unsigned long long)a1;
- (double)velocityFromA:(unsigned long long)a0 toB:(unsigned long long)a1;

@end
