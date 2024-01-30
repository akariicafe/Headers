@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqualToDomainSelection:(id)a0;
- (id)initWithDomain:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (BOOL)containsDomain:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)globPatterns;
- (id)allDomains;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (id)initWithDomainsFromArray:(id)a0;
- (id)initWithDomainsFromSet:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
