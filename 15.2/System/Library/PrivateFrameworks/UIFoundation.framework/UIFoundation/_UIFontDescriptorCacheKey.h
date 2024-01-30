@class UIFontDescriptor, NSString;

@interface _UIFontDescriptorCacheKey : _UIFontCacheKey

@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double pointSize;
@property (copy, nonatomic) NSString *textStyleForScaling;
@property (nonatomic) double pointSizeForScaling;
@property (nonatomic) double maximumPointSizeAfterScaling;
@property (nonatomic) BOOL textLegibility;

- (unsigned long long)_hash;
- (BOOL)_isEqualToKey:(id)a0;
- (id)description;
- (void)dealloc;

@end
