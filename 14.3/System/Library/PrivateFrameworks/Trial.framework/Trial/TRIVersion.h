@class NSNumber;

@interface TRIVersion : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *majorVersion;
@property (readonly, nonatomic) NSNumber *minorVersion;
@property (readonly, nonatomic) NSNumber *patchVersion;

+ (id)parseVersionFromString:(id)a0 withPrefix:(id)a1;
+ (id)versionWithMajorVersion:(id)a0 minorVersion:(id)a1 patchVersion:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMajorVersion:(id)a0 minorVersion:(id)a1 patchVersion:(id)a2;
- (BOOL)isEqualToVersion:(id)a0;
- (id)copyWithReplacementMajorVersion:(id)a0;
- (id)copyWithReplacementMinorVersion:(id)a0;
- (id)copyWithReplacementPatchVersion:(id)a0;

@end
