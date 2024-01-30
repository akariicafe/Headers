@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject

@property (readonly, nonatomic) const struct __CFString { } *textStyle;
@property (readonly, nonatomic) NSString *sizeCategory;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithTextStyle:(const struct __CFString { } *)a0 sizeCategory:(id)a1;

@end
