@protocol SXFontAttributes;

@interface SXFontIndexCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;
@property (readonly, nonatomic) long long fontSize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFontAttributes:(id)a0 fontSize:(long long)a1;

@end
