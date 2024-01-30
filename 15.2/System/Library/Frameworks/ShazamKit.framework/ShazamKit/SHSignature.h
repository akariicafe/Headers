@class NSUUID, SHSignatureMetrics, NSData, NSDate, AVAudioTime;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *ID;
@property (retain, nonatomic) NSDate *audioStartDate;
@property (retain, nonatomic) AVAudioTime *time;
@property (copy, nonatomic) SHSignatureMetrics *metrics;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)signatureWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)signatureFromData:(id)a0 atTime:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (void)commonSetupWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2;
- (id)_startDateBasedUponAudioTime:(id)a0;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2;

@end
