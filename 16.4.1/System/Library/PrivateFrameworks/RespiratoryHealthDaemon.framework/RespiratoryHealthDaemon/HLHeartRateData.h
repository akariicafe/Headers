@class NSUUID, NSDate;

@interface HLHeartRateData : NSObject

@property (readonly) NSDate *timestamp;
@property (nonatomic) double heartRate;
@property (readonly) double confidence;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly) int context;
@property (retain, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;

@end
