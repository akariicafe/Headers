@class NSString;

@interface _UIFontNameCacheKey : _UIFontCacheKey

@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) int traits;
@property (nonatomic) double pointSize;

- (unsigned long long)_hash;
- (BOOL)_isEqualToKey:(id)a0;
- (id)description;
- (void)dealloc;

@end
