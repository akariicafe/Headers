@class NSUUID, NSTimeZone, NSDateInterval;

@interface HKHRSampleClassification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sampleUUID;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) NSDateInterval *sampleDateInterval;
@property (readonly, nonatomic) NSTimeZone *sampleTimeZone;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSampleUUID:(id)a0 classification:(long long)a1 sampleDateInterval:(id)a2 sampleTimeZone:(id)a3;

@end
