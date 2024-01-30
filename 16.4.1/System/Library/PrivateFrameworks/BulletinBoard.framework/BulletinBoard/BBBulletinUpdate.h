@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BBBulletin *bulletin;
@property (readonly, nonatomic) unsigned long long feeds;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)typeDescription;
- (id)initWithBulletin:(id)a0 feeds:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
