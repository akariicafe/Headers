@class NSArray, NSDictionary, NSData, NSDate, TASPAdvertisement, TAMetricsDetection;

@interface TASuspiciousDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSDictionary *detectionSummary;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly, copy, nonatomic) NSArray *locationHistory;
@property (readonly, nonatomic) TAMetricsDetection *detectionMetrics;
@property (readonly, nonatomic) unsigned long long detectionType;

- (id)descriptionDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLatestAdv:(id)a0 detectionSummary:(id)a1 date:(id)a2 locHistory:(id)a3 detectionMetrics:(id)a4 detectionType:(unsigned long long)a5;

@end
