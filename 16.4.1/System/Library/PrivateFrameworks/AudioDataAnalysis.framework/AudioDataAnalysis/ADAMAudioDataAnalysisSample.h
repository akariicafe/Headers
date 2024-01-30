@class NSUUID, NSDictionary, NSDateInterval, NSNumber;

@interface ADAMAudioDataAnalysisSample : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *data;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initAudioSampleWithType:(unsigned int)a0 data:(id)a1 dateInterval:(id)a2 metadata:(id)a3;

@end
