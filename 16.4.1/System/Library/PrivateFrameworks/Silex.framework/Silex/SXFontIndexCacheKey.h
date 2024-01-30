@protocol SXFontAttributes;

@interface SXFontIndexCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;
@property (readonly, nonatomic) long long fontSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFontAttributes:(id)a0 fontSize:(long long)a1;

@end
