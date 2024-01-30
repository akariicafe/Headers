@class NSData;

@interface CKDistributedTimestamp : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *siteIdentifier;
@property (readonly, nonatomic) unsigned long long clockValue;
@property (readonly, nonatomic) unsigned char modifier;
@property (readonly, nonatomic) BOOL unordered;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSiteIdentifier:(id)a0 clockValue:(unsigned long long)a1 modifier:(unsigned char)a2 unordered:(BOOL)a3;
- (id)_initWithSiteIdentifier:(id)a0 clockValue:(unsigned long long)a1 modifier:(unsigned char)a2 unordered:(BOOL)a3;
- (long long)compareToTimestamp:(id)a0;
- (id)initWithSiteIdentifier:(id)a0 clockValue:(unsigned long long)a1;

@end
