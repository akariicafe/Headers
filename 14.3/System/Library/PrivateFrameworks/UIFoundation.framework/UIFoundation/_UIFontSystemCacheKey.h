@interface _UIFontSystemCacheKey : _UIFontCacheKey

@property (nonatomic) int traits;
@property (nonatomic) double pointSize;
@property (nonatomic) BOOL textLegibility;

- (unsigned long long)_hash;
- (id)description;
- (BOOL)_isEqualToKey:(id)a0;

@end
