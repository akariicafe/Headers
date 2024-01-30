@class SHMatch, SHSignature, NSError;

@interface SHMatcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double recordingIntermission;
@property (readonly, nonatomic) double retrySeconds;
@property (readonly, nonatomic) SHMatch *match;
@property (readonly, nonatomic) SHSignature *signature;
@property (readonly, nonatomic) NSError *error;

+ (id)unrecoverableError:(id)a0;
+ (id)errorResponseForSignature:(id)a0 error:(id)a1;
+ (id)noMatchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 signature:(id)a2;
+ (id)matchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2 signature:(id)a3 error:(id)a4;

@end
