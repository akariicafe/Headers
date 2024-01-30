@interface UIKBRenderFactory_Car : UIKBRenderFactory

@property (readonly, nonatomic) double carScale;

- (long long)assetIdiom;
- (id)displayContentsForKey:(id)a0;
- (id)backgroundTraitsForKeyplane:(id)a0;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (void)customizeLanguageIndicatorTraitsForTraits:(id)a0;
- (id)shiftKeyImageName;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;
- (id)globalKeyImageName;
- (id)dividerColor;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2 onKeyplane:(id)a3;
- (id)enabledKeyColor;
- (id)activeKeyColor;
- (double)defaultKeyFontSize;
- (id)highlightedKeyColor;

@end
