@interface RMSSample : NSObject

@property (nonatomic) double RMSScore;
@property (nonatomic) unsigned long long lastSampleCount;

- (id)initWithRMSScore:(double)a0 lastSampleCount:(unsigned long long)a1;
- (long long)compareScoresDesc:(id)a0;

@end
