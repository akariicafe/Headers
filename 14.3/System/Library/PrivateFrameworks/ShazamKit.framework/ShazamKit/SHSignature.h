@class NSUUID, SHSignatureMetrics, NSData, NSDate, AVAudioTime;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *ID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) AVAudioTime *time;
@property (copy, nonatomic) SHSignatureMetrics *metrics;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) NSData *data;

+ (id)signatureWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)signatureFromData:(id)a0 atTime:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2;

@end
