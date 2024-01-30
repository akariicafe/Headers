@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject

@property (readonly, nonatomic) const struct __CFString { } *textStyle;
@property (readonly, nonatomic) NSString *sizeCategory;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTextStyle:(const struct __CFString { } *)a0 sizeCategory:(id)a1;

@end
