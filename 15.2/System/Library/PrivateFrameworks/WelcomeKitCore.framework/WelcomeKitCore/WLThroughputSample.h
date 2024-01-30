@class NSDate;

@interface WLThroughputSample : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long bytes;
@property (nonatomic) unsigned long long expectedBytes;

- (void).cxx_destruct;

@end
