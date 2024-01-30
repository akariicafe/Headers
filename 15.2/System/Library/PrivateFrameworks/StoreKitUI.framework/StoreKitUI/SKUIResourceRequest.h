@interface SKUIResourceRequest : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL cachesInMemory;
@property (retain, nonatomic) id cacheKey;
@property (nonatomic) unsigned long long requestIdentifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)finishWithResource:(id)a0;
- (id)newLoadOperation;
- (id)_initSKUIResourceRequest;

@end
