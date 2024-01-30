@class NSString;

@interface ESDAMContainerIDCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long dataclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountID:(id)a0 andDataclass:(long long)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
