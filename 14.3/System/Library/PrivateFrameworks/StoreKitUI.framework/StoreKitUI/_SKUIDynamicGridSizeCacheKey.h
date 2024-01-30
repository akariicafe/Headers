@class SKUIViewElement;

@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying>

@property (nonatomic) long long position;
@property (retain, nonatomic) SKUIViewElement *viewElement;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)__isSKUIDynamicGridSizeCacheKey;

@end
