@class NSString;

@interface TSWPListStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)defaultPropertyMap;
+ (id)propertiesAllowingNSNull;
+ (id)presetStyleDescriptor;
+ (int)pLabelTypeForLevel:(unsigned long long)a0 forPropertyMapping:(id)a1 includeDegenerateLevels:(BOOL)a2;
+ (int)firstLabelTypeForPropertyMapping:(id)a0;
+ (void)pGetDefaultTextIndentFloats:(float[9])a0;
+ (id)defaultLabelIndents;
+ (id)pLabelTypeArrayForType:(int)a0;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelString;
+ (int)defaultLabelNumberType;
+ (BOOL)defaultTieredNumber;
+ (id)stickyOverrideProperties;
+ (int)effectiveTypeForLevel:(unsigned long long)a0 forPropertyMapping:(id)a1;
+ (int)labelTypeForLevel:(unsigned long long)a0 forPropertyMapping:(id)a1;
+ (id)defaultTextIndents;
+ (id)defaultStyleWithContext:(id)a0 type:(int)a1;
+ (id)harvardStyleWithContext:(id)a0;
+ (id)listStyleWithNumberType:(int)a0 inStyleSheet:(id)a1 withNumberedPresetStyle:(id)a2;
+ (id)propertyMapForListNumberType:(int)a0;
+ (id)languageSpecificStylesForLanguages:(id)a0 theme:(id)a1 stylesheet:(id)a2;
+ (BOOL)deprecated_isDefaultMissingBulletImage:(id)a0;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)a0 context:(id)a1;
+ (id)numberedListStyleForPresets:(id)a0;
+ (id)nameForLanguageSpecificListStyle:(int)a0 withLocal:(id)a1;
+ (id)p_arrayValuedProperties;
+ (id)defaultLabelImages;
+ (id)defaultLabelNumberTypes;
+ (id)defaultLabelTieredNumbers;
+ (id)defaultLabelStrings;
+ (id)defaultLabelTypes;
+ (id)textInspectorBulletStrings;
+ (id)additionalBulletStrings;
+ (id)textBulletListStyleForPresets:(id)a0;
+ (id)listStyleWithTextBullet:(id)a0 inStyleSheet:(id)a1 withTextBulletPresetStyle:(id)a2;
+ (id)propertyMapForListTextBullet:(id)a0;
+ (id)extendedListNumberingTypesInStylesheet:(id)a0;
+ (id)defaultArrayForProperty:(int)a0;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)baseStyleForTopicNumbers;
- (int)labelTypeForLevel:(unsigned long long)a0;
- (int)effectiveTypeForLevel:(unsigned long long)a0;
- (int)firstLabelType;
- (double)labelIndentForLevel:(unsigned long long)a0;
- (double)textIndentForLevel:(unsigned long long)a0 fontSize:(double)a1;
- (id)pOverrideArrayWithValue:(id)a0 forProperty:(int)a1 atParagraphLevels:(id)a2 withContext:(id)a3;
- (id)overridePropertyMapWithValue:(id)a0 forProperty:(int)a1 atParagraphLevels:(id)a2 withContext:(id)a3;
- (void)loadFromArchive:(const struct ListStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; struct RepeatedField<float> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct RepeatedField<float> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; struct RepeatedPtrField<TSWP::ListStyleArchive_LabelGeometry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedField<int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSWP::ListStyleArchive_LabelImage> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct RepeatedField<bool> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x11; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x12; struct StyleArchive *x13; struct ShadowArchive *x14; struct Color *x15; unsigned int x16; BOOL x17; BOOL x18; BOOL x19; int x20; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ListStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; struct RepeatedField<float> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct RepeatedField<float> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; struct RepeatedPtrField<TSWP::ListStyleArchive_LabelGeometry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedField<int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSWP::ListStyleArchive_LabelImage> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct RepeatedField<bool> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x11; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x12; struct StyleArchive *x13; struct ShadowArchive *x14; struct Color *x15; unsigned int x16; BOOL x17; BOOL x18; BOOL x19; int x20; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)numberTypeName;
- (id)parentStyleForFixingOrphanVariation;
- (void)setLocalizedArray:(id)a0 forProperty:(int)a1;
- (id)additionalPropertiesNeededForVariationWithPropertyMap:(id)a0;
- (BOOL)wantsCustomResolveLogicForProperty:(int)a0 forStyles:(id)a1;
- (id)resolvedValueForProperty:(int)a0 inStyles:(id)a1;
- (id)objectForProperty:(int)a0 atIndex:(unsigned long long)a1;
- (id)p_characterFillByResolvingWithParagraphStyle:(id)a0;
- (id)boxedObjectForProperty:(int)a0 atIndex:(unsigned long long)a1;
- (int)intValueForProperty:(int)a0 atIndex:(unsigned long long)a1;
- (float)floatValueForProperty:(int)a0 atIndex:(unsigned long long)a1;
- (double)doubleValueForProperty:(int)a0 atIndex:(unsigned long long)a1;
- (double)CGFloatValueForProperty:(int)a0 atIndex:(unsigned long long)a1;

@end
