@interface SKUIResourceRequest : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL cachesInMemory;
@property (retain, nonatomic) id cacheKey;
@property (nonatomic) unsigned long long requestIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)finishWithResource:(id)a0;
- (id)newLoadOperation;
- (id)_initSKUIResourceRequest;

@end
