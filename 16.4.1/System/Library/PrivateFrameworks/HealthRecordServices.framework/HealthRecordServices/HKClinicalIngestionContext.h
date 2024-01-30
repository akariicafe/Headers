@class HKClinicalAccountConnectionInformation, NSDate;

@interface HKClinicalIngestionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKClinicalAccountConnectionInformation *accountInformation;
@property (readonly, nonatomic) long long queryMode;
@property (readonly, nonatomic) long long options;
@property (readonly, copy, nonatomic) NSDate *lastFetchDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountConnectionInformation:(id)a0 queryMode:(long long)a1 options:(long long)a2 lastFetchDate:(id)a3;

@end
