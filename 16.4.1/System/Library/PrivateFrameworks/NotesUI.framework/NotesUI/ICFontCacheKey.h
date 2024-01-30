@class NSString, UIFontDescriptor;

@interface ICFontCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) int traits;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) UIFontDescriptor *fontDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFont:(id)a0;

@end
