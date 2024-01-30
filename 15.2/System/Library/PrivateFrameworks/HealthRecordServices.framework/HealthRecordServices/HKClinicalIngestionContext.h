@class NSDate, HDHRSAccountConnectionInformation;

@interface HKClinicalIngestionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HDHRSAccountConnectionInformation *accountInformation;
@property (readonly, nonatomic) long long options;
@property (readonly, copy, nonatomic) NSDate *lastFetchDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAccountInformation:(id)a0 options:(long long)a1 lastFetchDate:(id)a2;

@end
