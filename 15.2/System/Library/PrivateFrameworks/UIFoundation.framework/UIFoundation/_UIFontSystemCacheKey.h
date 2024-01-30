@class NSString;

@interface _UIFontSystemCacheKey : _UIFontCacheKey

@property (nonatomic) int traits;
@property (copy, nonatomic) NSString *design;
@property (nonatomic) double weight;
@property (nonatomic) double pointSize;
@property (nonatomic) BOOL monospacedDigits;
@property (nonatomic) BOOL textLegibility;

- (unsigned long long)_hash;
- (BOOL)_isEqualToKey:(id)a0;
- (id)description;
- (void)dealloc;

@end
