@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BBBulletin *bulletin;
@property (readonly, nonatomic) unsigned long long feeds;

- (id)typeDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithBulletin:(id)a0 feeds:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
