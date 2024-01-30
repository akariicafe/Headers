@class SUScanOptions, NSString;

@interface SUMDMScanOptions : SUOptionsBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUScanOptions *scanOptions;
@property (readonly, retain, nonatomic) NSString *requestedProductMarketingVersion;
@property (readonly, nonatomic) BOOL useDelayPeriod;
@property (readonly, nonatomic) unsigned long long delayPeriodDays;
@property (readonly, nonatomic) unsigned long long MDMSoftwareUpdatePath;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)deviceIsSupervised;
- (unsigned long long)MCPathToSUMDMPath:(long long)a0;
- (BOOL)delayRestrictionEnabled;
- (id)initWithScanOption:(id)a0;

@end
