@interface UsageTallySample : NSObject

@property (nonatomic) double startTimeIntervalSinceReferenceDate;
@property (nonatomic) double elapsedTime;
@property (nonatomic) unsigned long long byteCount;

- (id)description;

@end
