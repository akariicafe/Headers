@class NSString;

@interface HDHRSOriginInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (readonly, copy, nonatomic) NSString *operatingSystemBuild;

+ (id)currentOSVersionWithProfile:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0 build:(id)a1;

@end
