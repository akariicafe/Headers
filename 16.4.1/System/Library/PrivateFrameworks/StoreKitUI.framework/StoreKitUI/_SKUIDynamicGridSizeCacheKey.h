@class SKUIViewElement;

@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying>

@property (nonatomic) long long position;
@property (retain, nonatomic) SKUIViewElement *viewElement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)__isSKUIDynamicGridSizeCacheKey;

@end
