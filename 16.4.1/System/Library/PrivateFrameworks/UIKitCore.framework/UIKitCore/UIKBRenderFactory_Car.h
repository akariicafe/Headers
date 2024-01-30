@interface UIKBRenderFactory_Car : UIKBRenderFactory

@property (readonly, nonatomic) double carScale;

- (long long)assetIdiom;
- (id)enabledKeyColor;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2 onKeyplane:(id)a3;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)activeKeyColor;
- (id)backgroundTraitsForKeyplane:(id)a0;
- (void)customizeLanguageIndicatorTraitsForTraits:(id)a0;
- (double)defaultKeyFontSize;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)displayContentsForKey:(id)a0;
- (id)dividerColor;
- (id)globalKeyImageName;
- (id)highlightedKeyColor;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;

@end
