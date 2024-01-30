@interface RMSSample : NSObject

@property (nonatomic) double RMSScore;
@property (nonatomic) unsigned long long lastSampleCount;

- (long long)compareScoresDesc:(id)a0;
- (id)initWithRMSScore:(double)a0 lastSampleCount:(unsigned long long)a1;

@end
