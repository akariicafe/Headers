@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject

@property (readonly, nonatomic) const struct __CFString { } *textStyle;
@property (readonly, nonatomic) NSString *sizeCategory;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTextStyle:(const struct __CFString { } *)a0 sizeCategory:(id)a1;

@end
