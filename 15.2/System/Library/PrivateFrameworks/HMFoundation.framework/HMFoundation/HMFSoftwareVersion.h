@class NSString;

@interface HMFSoftwareVersion : HMFVersion

@property (readonly, copy) NSString *buildVersion;
@property (readonly, copy) NSString *shortVersionString;

+ (BOOL)supportsSecureCoding;
+ (id)versionFromOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0;

- (id)localizedDescription;
- (long long)compare:(id)a0;
- (struct { long long x0; long long x1; long long x2; })operatingSystemVersion;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithVersionString:(id)a0;
- (id)versionString;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2 buildVersion:(id)a3;

@end
