@class NSData;

@interface CKDistributedSiteIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, copy, nonatomic) NSData *modifier;

+ (id)SHADescription:(id)a0;
+ (id)pSiteIdentifierFromSiteIdentifier:(id)a0;
+ (id)siteIdentifierFromPSiteIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithStringSiteIdentifiers;
- (id)initWithIdentifier:(id)a0 modifier:(id)a1;

@end
