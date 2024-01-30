@class NSData, NSDate;

@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) long long RSSI;
@property (readonly, nonatomic) long long noise;
@property (readonly, nonatomic) double txRate;
@property (readonly, nonatomic) double rxRate;
@property (readonly, nonatomic) float CCA;
@property (copy, nonatomic) NSData *linkQualityMetricData;

- (double)txRate;
- (long long)RSSI;
- (long long)noise;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToLinkQualityMetric:(id)a0;
- (float)CCA;
- (double)rxRate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
