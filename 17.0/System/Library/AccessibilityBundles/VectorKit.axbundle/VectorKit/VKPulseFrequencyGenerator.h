@interface VKPulseFrequencyGenerator : NSObject {
    double slope;
    double intercept;
}

- (double)frequencyForDepth:(int)a0;
- (id)initWithMinPulseFrequency:(double)a0 maxPulseFrequency:(double)a1 minDepth:(int)a2 maxDepth:(int)a3;

@end
