@interface CSStopRecordingOptions : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long stopRecordingReason;
@property (readonly, nonatomic) unsigned long long expectedStopHostTime;
@property (readonly, nonatomic) double trailingSilenceDurationAtEndpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithStopRecordingReason:(unsigned long long)a0 expectedStopHostTime:(unsigned long long)a1 trailingSilenceDurationAtEndpoint:(double)a2;

@end
