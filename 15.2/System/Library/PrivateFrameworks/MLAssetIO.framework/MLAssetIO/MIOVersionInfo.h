@class NSString;

@interface MIOVersionInfo : NSObject <NSCopying>

@property (readonly, nonatomic) long long majorVersion;
@property (readonly, nonatomic) long long minorVersion;
@property (readonly, nonatomic) long long patchVersion;
@property (readonly, nonatomic) NSString *versionNumberString;

- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithMajor:(long long)a0 minor:(long long)a1 patch:(long long)a2;

@end
