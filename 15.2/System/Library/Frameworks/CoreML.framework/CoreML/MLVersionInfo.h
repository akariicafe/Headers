@class NSString;

@interface MLVersionInfo : NSObject

@property (readonly) long long majorVersion;
@property (readonly) long long minorVersion;
@property (readonly) long long patchVersion;
@property (readonly) NSString *variantString;
@property (readonly, nonatomic) NSString *versionNumberString;
@property (readonly, nonatomic) NSString *versionString;

+ (id)versionInfoWithStringProgressive:(id)a0;
+ (id)versionInfoWithMajor:(long long)a0 minor:(long long)a1 patch:(long long)a2 variant:(id)a3;
+ (id)versionInfoWithString:(id)a0;

- (BOOL)olderThan:(id)a0;
- (void).cxx_destruct;
- (id)initWithMajor:(long long)a0 minor:(long long)a1 patch:(long long)a2 variant:(id)a3;

@end
