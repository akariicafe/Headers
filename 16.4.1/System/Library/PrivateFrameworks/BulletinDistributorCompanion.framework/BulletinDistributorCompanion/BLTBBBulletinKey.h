@class NSString;

@interface BLTBBBulletinKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, copy, nonatomic) NSString *publisherMatchID;

+ (id)bulletinKeyWithSectionID:(id)a0 publisherMatchID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyString;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSectionID:(id)a0 publisherMatchID:(id)a1;

@end
