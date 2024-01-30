@protocol SXFontAttributes;

@interface SXFontIndexCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;
@property (readonly, nonatomic) long long fontSize;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithFontAttributes:(id)a0 fontSize:(long long)a1;

@end
