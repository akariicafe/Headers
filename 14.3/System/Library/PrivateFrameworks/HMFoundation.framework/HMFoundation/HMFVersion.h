@class NSString;

@interface HMFVersion : HMFObject <HMFLocalizable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long updateVersion;
@property (readonly, copy) NSString *versionString;
@property (readonly, copy) NSString *localizedDescription;

- (id)initWithVersionString:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToVersion:(id)a0;
- (BOOL)isAtLeastVersion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isGreaterThanVersion:(id)a0;

@end
