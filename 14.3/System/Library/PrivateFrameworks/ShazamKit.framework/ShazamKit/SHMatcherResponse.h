@class SHMatch;

@interface SHMatcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double recordingIntermission;
@property (readonly, nonatomic) double retrySeconds;
@property (readonly, nonatomic) SHMatch *match;

+ (id)errorResponse;
+ (id)noMatchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2;

@end
