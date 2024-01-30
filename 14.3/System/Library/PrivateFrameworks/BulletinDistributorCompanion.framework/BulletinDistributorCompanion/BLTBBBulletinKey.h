@class NSString;

@interface BLTBBBulletinKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, copy, nonatomic) NSString *publisherMatchID;

+ (id)bulletinKeyWithSectionID:(id)a0 publisherMatchID:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)keyString;
- (id)initWithSectionID:(id)a0 publisherMatchID:(id)a1;

@end
