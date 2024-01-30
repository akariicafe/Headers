@interface GCVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long major;
@property (readonly) unsigned long long minor;
@property (readonly) unsigned long long patch;

+ (id)currentSourceVersion;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (BOOL)isGreaterThanOrEqualTo:(id)a0;
- (BOOL)isGreaterThan:(id)a0;
- (BOOL)isLessThan:(id)a0;
- (BOOL)isLessThanOrEqualTo:(id)a0;
- (id)initWithMajor:(unsigned long long)a0 minor:(unsigned long long)a1 patch:(unsigned long long)a2;
- (BOOL)isEqualToSourceVersion:(id)a0;
- (BOOL)isGreaterThanOrEqualToSourceVersion:(id)a0;
- (BOOL)isGreaterThanSourceVersion:(id)a0;
- (BOOL)isLessThanOrEqualToSourceVersion:(id)a0;
- (BOOL)isLessThanSourceVersion:(id)a0;

@end
