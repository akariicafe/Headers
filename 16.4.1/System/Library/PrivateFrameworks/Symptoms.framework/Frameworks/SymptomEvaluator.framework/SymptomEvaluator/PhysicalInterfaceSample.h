@interface PhysicalInterfaceSample : NSObject

@property (nonatomic) double startTimeIntervalSinceReferenceDate;
@property (nonatomic) double elapsedTime;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long txBytes;
@property (readonly, nonatomic) double rxThroughput;
@property (readonly, nonatomic) double txThroughput;
@property (readonly, nonatomic) unsigned long long rxThroughputBps;
@property (readonly, nonatomic) unsigned long long txThroughputBps;

- (id)description;

@end
