@interface SKUIResourceRequest : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL cachesInMemory;
@property (retain, nonatomic) id cacheKey;
@property (nonatomic) unsigned long long requestIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initSKUIResourceRequest;
- (void)finishWithResource:(id)a0;
- (id)newLoadOperation;

@end
