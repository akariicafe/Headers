@class NSUUID, SHSignatureMetrics, NSData, NSDate, AVAudioTime;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *audioStartDate;
@property (retain, nonatomic) AVAudioTime *time;
@property (copy, nonatomic) SHSignatureMetrics *metrics;
@property (readonly, nonatomic) NSUUID *_ID;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)signatureFromData:(id)a0 atTime:(id)a1 error:(id *)a2;
+ (id)signatureWithDataRepresentation:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)_audioRepresentation;
- (id)_startDateBasedUponAudioTime:(id)a0;
- (void)commonSetupWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2 error:(id *)a3;

@end
