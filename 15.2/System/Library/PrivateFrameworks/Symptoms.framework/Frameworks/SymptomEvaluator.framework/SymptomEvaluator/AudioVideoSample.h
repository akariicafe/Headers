@interface AudioVideoSample : NSObject

@property (nonatomic) double startTimeIntervalSinceReferenceDate;
@property (nonatomic) double elapsedTime;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long txBytes;
@property (readonly, nonatomic) double averageRxThroughput;
@property (readonly, nonatomic) double averageTxThroughput;
@property (readonly, nonatomic) BOOL isIdle;

- (id)description;

@end
