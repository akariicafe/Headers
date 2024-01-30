@interface BBBulletinRemoveUpdate : BBBulletinUpdate

@property (readonly, nonatomic) BOOL shouldSync;

+ (BOOL)supportsSecureCoding;
+ (id)updateWithBulletin:(id)a0 feeds:(unsigned long long)a1 shouldSync:(BOOL)a2;

- (id)initWithBulletin:(id)a0 feeds:(unsigned long long)a1 shouldSync:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)typeDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
