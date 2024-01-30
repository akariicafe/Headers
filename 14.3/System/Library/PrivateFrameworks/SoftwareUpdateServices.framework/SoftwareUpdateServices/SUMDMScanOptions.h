@class SUScanOptions, NSString;

@interface SUMDMScanOptions : SUOptionsBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUScanOptions *scanOptions;
@property (readonly, retain, nonatomic) NSString *requestedProductMarketingVersion;
@property (readonly, nonatomic) BOOL useDelayPeriod;
@property (readonly, nonatomic) unsigned long long delayPeriodDays;


- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)deviceIsSupervised;
- (id)initWithScanOption:(id)a0;

@end
