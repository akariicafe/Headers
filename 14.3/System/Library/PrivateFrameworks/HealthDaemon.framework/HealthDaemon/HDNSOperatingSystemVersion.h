@interface HDNSOperatingSystemVersion : NSObject

@property struct { long long majorVersion; long long minorVersion; long long patchVersion; } versionStruct;

+ (id)versionWithMajor:(long long)a0 minor:(long long)a1 patch:(long long)a2;
+ (id)unknownVersion;

@end
