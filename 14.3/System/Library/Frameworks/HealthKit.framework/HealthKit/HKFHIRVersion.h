@class NSString;

@interface HKFHIRVersion : NSObject <NSCopying, NSSecureCoding> {
    NSString *_invalidVersionString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long majorVersion;
@property (readonly, nonatomic) long long minorVersion;
@property (readonly, nonatomic) long long patchVersion;
@property (readonly, nonatomic) NSString *FHIRRelease;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)primaryR4Version;
+ (id)versionFromVersionString:(id)a0 error:(id *)a1;
+ (id)versionFromVersionString:(id)a0;
+ (id)primaryDSTU2Version;

- (id)initWithInvalidVersionString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSemanticVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (void)encodeWithCoder:(id)a0;

@end
