@class NSString;

@interface _UIFontTextStyleCacheKey : _UIFontCacheKey

@property (copy, nonatomic) NSString *textStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) BOOL textLegibility;

- (BOOL)_isEqualToKey:(id)a0;
- (unsigned long long)_hash;
- (void)dealloc;
- (id)description;

@end
