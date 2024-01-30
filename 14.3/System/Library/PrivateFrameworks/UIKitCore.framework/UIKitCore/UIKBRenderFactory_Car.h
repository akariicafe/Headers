@interface UIKBRenderFactory_Car : UIKBRenderFactory

@property (readonly, nonatomic) double carScale;

- (id)displayContentsForKey:(id)a0;
- (id)backgroundTraitsForKeyplane:(id)a0;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)deleteKeyImageName;
- (void)customizeLanguageIndicatorTraitsForTraits:(id)a0;
- (id)deleteOnKeyImageName;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;
- (id)globalKeyImageName;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2 onKeyplane:(id)a3;
- (id)enabledKeyColor;
- (id)activeKeyColor;
- (double)defaultKeyFontSize;
- (id)highlightedKeyColor;
- (id)dividerColor;

@end
