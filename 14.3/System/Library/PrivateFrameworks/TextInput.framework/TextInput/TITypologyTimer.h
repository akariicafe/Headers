@interface TITypologyTimer : NSObject

@property (nonatomic) double elapsedTime;
@property (nonatomic) double mostRecentTimestamp;
@property (nonatomic) double maxTimeIntervalBetweenInputs;
@property (nonatomic) BOOL foundFirstInput;

- (void)addInputEventWithTimestamp:(double)a0;

@end
