@class NSString;

@interface TSWPListStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)defaultPropertyMap;
+ (id)propertiesAllowingNSNull;
+ (id)presetStyleDescriptor;
+ (id)defaultMissingBulletImage;
+ (BOOL)isDefaultMissingBulletImage:(id)a0;
+ (int)pLabelTypeForLevel:(unsigned long long)a0 forPropertyMapping:(id)a1 includeDegenerateLevels:(BOOL)a2;
+ (int)firstLabelTypeForPropertyMapping:(id)a0;
+ (void)pGetDefaultTextIndentFloats:(double[9])a0;
+ (id)defaultLabelIndents;
+ (id)pLabelTypeArrayForType:(int)a0;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)a0;
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
+ (id)numberedlistStyleForPresets:(id)a0;
+ (id)listStyleWithNumberType:(int)a0 inStyleSheet:(id)a1 withNumberedPresetStyle:(id)a2;
+ (id)propertyMapForListNumberType:(int)a0;
+ (id)CJKListNameForNumberType:(int)a0;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)baseStyleForTopicNumbers;
- (int)labelTypeForLevel:(unsigned long long)a0;
- (int)effectiveTypeForLevel:(unsigned long long)a0;
- (int)firstLabelType;
- (double)labelIndentForLevel:(unsigned long long)a0;
- (double)textIndentForLevel:(unsigned long long)a0 fontSize:(double)a1;
- (id)pOverrideArrayWithValue:(id)a0 forProperty:(int)a1 atParagraphLevels:(id)a2 withContext:(id)a3;
- (id)overridePropertyMapWithValue:(id)a0 forProperty:(int)a1 atParagraphLevels:(id)a2 withContext:(id)a3;

@end
