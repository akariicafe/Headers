@class NetworkQualityValue, NSString, NSDictionary, NSDate, NSNumber, NSError;

@interface NetworkQualityResult : NSObject <NSCopying>

@property (copy) NSDate *timestamp;
@property long long index;
@property (copy) NetworkQualityValue *downlinkCapacity;
@property (copy) NSNumber *downloadCapacity;
@property (copy) NSNumber *downlinkBytesTransferred;
@property (copy) NSNumber *downlinkFlows;
@property (copy) NSString *interfaceName;
@property (copy) NetworkQualityValue *uplinkCapacity;
@property (copy) NSNumber *uploadCapacity;
@property (copy) NSNumber *uplinkBytesTransferred;
@property (copy) NSNumber *uplinkFlows;
@property (copy) NetworkQualityValue *downlinkResponsiveness;
@property (copy) NSNumber *downloadResponsiveness;
@property long long downloadResponsivenessRating;
@property (copy) NetworkQualityValue *uplinkResponsiveness;
@property (copy) NSNumber *uploadResponsiveness;
@property long long uploadResponsivenessRating;
@property (copy) NSDictionary *workingLatencyValues;
@property (copy) NetworkQualityValue *latency;
@property (copy) NSNumber *idleLatency;
@property (copy) NSDictionary *idleLatencyValues;
@property (copy) NSDictionary *urlSessionMetrics;
@property (copy) NSError *error;

+ (long long)ratingForResponsivenessScore:(long long)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)finalizeResult;

@end
