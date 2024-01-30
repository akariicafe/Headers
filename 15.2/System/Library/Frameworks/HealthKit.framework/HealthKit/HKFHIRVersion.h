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

+ (id)versionFromVersionString:(id)a0 error:(id *)a1;
+ (id)primaryDSTU2Version;
+ (id)versionFromVersionString:(id)a0;
+ (id)primaryR4Version;

- (void)encodeWithCoder:(id)a0;
- (id)initWithInvalidVersionString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSemanticVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
