@class NSString, UIFontDescriptor;

@interface ICFontCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) int traits;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) UIFontDescriptor *fontDescriptor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFont:(id)a0;

@end
