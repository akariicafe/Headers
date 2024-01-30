@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long dataclass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 andDataclass:(long long)a1;

@end
