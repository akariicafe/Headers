@class NSArray;

@interface CRLMFilteringThresholds : NSObject

@property (retain) NSArray *charLengths;
@property (retain) NSArray *lmThresholds;
@property (readonly) float activationThreshold;
@property (readonly) long long minimumLength;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (float)lmThresholdForLength:(long long)a0;

@end
