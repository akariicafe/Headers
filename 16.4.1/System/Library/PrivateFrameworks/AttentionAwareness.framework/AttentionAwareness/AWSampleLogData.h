@class NSString;

@interface AWSampleLogData : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long samplingInterval;
@property (nonatomic) BOOL pollingClient;
@property (nonatomic) unsigned long long cumulativeSamplingTime;
@property (nonatomic) unsigned long long samplingStartTime;

- (void).cxx_destruct;

@end
