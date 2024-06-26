@class TSSStylesheet, NSString, TSSPropertyMap, NSSet;

@interface TSSStyle : TSPObject <NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSThemeAsset, TSSPropertySource, TSSStyleClient, TSKModel, TSKTransformableObject> {
    TSSPropertyMap *mOverridePropertyMap;
    NSString *mName;
    NSString *mStyleIdentifier;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *styleIdentifier;
@property (readonly, nonatomic) TSSStyle *parent;
@property (readonly, nonatomic) TSSStyle *rootAncestor;
@property (readonly, nonatomic) TSSStyle *baseStyleForVariation;
@property (readonly, nonatomic) TSSStyle *firstIdentifiedAncestor;
@property (readonly, nonatomic) TSSStyle *rootIdentifiedAncestor;
@property (readonly, nonatomic) BOOL isVariation;
@property (readonly, nonatomic) BOOL isNamed;
@property (readonly, nonatomic) BOOL isIdentified;
@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (readonly, nonatomic) TSSPropertyMap *overridePropertyMap;
@property (readonly, nonatomic) NSSet *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)description;
+ (id)defaultStyleWithContext:(id)a0;
+ (BOOL)validateFloatValue:(float *)a0 forProperty:(int)a1;
+ (id)boxedDefaultValueForProperty:(int)a0;
+ (double)defaultDoubleValueForProperty:(int)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultPropertyMap;
+ (id)defaultValueForProperty:(int)a0;
+ (double)fontSizeForFontSize:(double)a0 scalingFactor:(double)a1;
+ (id)propertiesAllowingNSNull;
+ (BOOL)validateDoubleValue:(double *)a0 forProperty:(int)a1;
+ (BOOL)validateIntValue:(int *)a0 forProperty:(int)a1;
+ (BOOL)validateIntValue:(int *)a0 forProperty:(int)a1 min:(int)a2 max:(int)a3;
+ (BOOL)validateIntValueAsBool:(int *)a0 forProperty:(int)a1;
+ (BOOL)validateObjectValue:(id *)a0 withClass:(Class)a1 forProperty:(int)a2;

- (id)valueForProperty:(int)a0;
- (void)setValue:(id)a0 forProperty:(int)a1;
- (id)objectForProperty:(int)a0;
- (void)removeAllValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setParent:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithContext:(id)a0;
- (id)init;
- (id)valuesForProperties:(id)a0;
- (id)copyWithContext:(id)a0;
- (void)setStylesheet:(id)a0;
- (BOOL)containsProperty:(int)a0;
- (float)floatValueForProperty:(int)a0;
- (id)propertyMap;
- (void)setDoubleValue:(double)a0 forProperty:(int)a1;
- (void)setFloatValue:(float)a0 forProperty:(int)a1;
- (void)setIntValue:(int)a0 forProperty:(int)a1;
- (double)CGFloatValueForProperty:(int)a0;
- (BOOL)isDescendentOf:(id)a0;
- (double)overrideDoubleValueForProperty:(int)a0;
- (BOOL)p_hasEqualValuesTo:(id)a0 forProperty:(int)a1;
- (BOOL)validateFloatValue:(float *)a0 forProperty:(int)a1;
- (id)copyPropertyMap;
- (id)fullPropertyMap;
- (id)boxedObjectForProperty:(int)a0;
- (id)boxedOverrideValueForProperty:(int)a0;
- (id)boxedValueForProperty:(int)a0;
- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)constrainShadowForSwatchGeneration;
- (id)constrainShapeStyleForContext:(id)a0;
- (void)constrainStrokeForSwatchGeneration;
- (id)copyFlattenedWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 context:(id)a1;
- (BOOL)definesProperty:(int)a0;
- (double)doubleValueForProperty:(int)a0;
- (void)fadeReflectionForSwatchGeneration;
- (BOOL)hasEqualPropertyValues:(id)a0;
- (BOOL)hasEqualValues:(id)a0 forProperties:(id)a1;
- (BOOL)hasEqualValuesToPropertyMap:(id)a0 forProperties:(id)a1;
- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (int)intValueForProperty:(int)a0;
- (BOOL)isAncestorOf:(id)a0;
- (BOOL)isChildOf:(id)a0;
- (BOOL)isParentOf:(id)a0;
- (BOOL)isThemeEquivalent:(id)a0;
- (SEL)mapThemeAssetSelector;
- (id)newOverridePropertyMapWithPropertyMap:(id)a0;
- (id)overriddenProperties;
- (double)overrideCGFloatValueForProperty:(int)a0;
- (unsigned long long)overrideCount;
- (float)overrideFloatValueForProperty:(int)a0;
- (int)overrideIntValueForProperty:(int)a0;
- (BOOL)overridePropertyMapIsEqualTo:(id)a0;
- (id)overridePropertyMapWithPropertyMap:(id)a0 overridePropertyMap:(id)a1 collapseSourceOverrides:(BOOL)a2;
- (id)overrideValueForProperty:(int)a0;
- (BOOL)overridesAnyProperty;
- (BOOL)overridesProperty:(int)a0;
- (id)propertyMapIgnoringStyle:(id)a0;
- (id)referencedStyles;
- (void)removeValueForProperty:(int)a0;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)setBoxedValue:(id)a0 forProperty:(int)a1;
- (void)setCGFloatValue:(double)a0 forProperty:(int)a1;
- (void)setOverridePropertyMap:(id)a0;
- (void)setStyleIdentifier:(id)a0;
- (void)setValuesForProperties:(id)a0;
- (BOOL)transformsFontSizes;
- (BOOL)validateDoubleValue:(double *)a0 forProperty:(int)a1;
- (BOOL)validateIntValue:(int *)a0 forProperty:(int)a1;
- (BOOL)validateIntValue:(int *)a0 forProperty:(int)a1 min:(int)a2 max:(int)a3;
- (BOOL)validateIntValueAsBool:(int *)a0 forProperty:(int)a1;
- (BOOL)validateObjectValue:(id *)a0 withClass:(Class)a1 forProperty:(int)a2;

@end
