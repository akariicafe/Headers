@class NSDate;

@interface NPTSpeedMetric : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *pointInTime;
@property (nonatomic) double timeSinceStart;
@property (nonatomic) long long bytesTransferred;
@property (nonatomic) long long totalBytesExpected;

- (double)speed;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPointInTime:(id)a0 timeSinceStart:(double)a1 bytesTransferred:(long long)a2 totalBytesExpected:(long long)a3;

@end
