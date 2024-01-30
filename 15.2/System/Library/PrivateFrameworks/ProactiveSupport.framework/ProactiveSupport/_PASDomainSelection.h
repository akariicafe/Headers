@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithDomainsFromArray:(id)a0;
- (id)initWithDomain:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allDomains;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)globPatterns;
- (id)description;
- (id)initWithDomainsFromSet:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (unsigned long long)hash;

@end
